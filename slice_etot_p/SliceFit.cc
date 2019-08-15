#include "Riostream.h"
#include <iostream>
#include <TFile.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TF1.h>
 #include <TStyle.h>
#include <TLine.h>
#include <TStyle.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TLatex.h>

//Customisable parameters for M vs. E of pi0 distribution
const int Np = 16;  //Number of projection
double xmin = 0.9; //Define the range of x to slice 
double xmax = 4.3;
//For symetrical fit around center do fitmin=fitmax in the main function
double fitmin_start;// = 0.85; 
double fitmax_start;// = 0.95; 
//double peak_start = 0.325; //Approximate position of gausian center for the first slice
int xsize = 700; //Width of canvas
int ysize = 500; //Height of canvas
char unit[10] = "GeV"; //Unit of X axis from 2D histo
// End customise

TH2D* histo; //Histogram to be projected 
TF1* fit[Np];
TH1D* slice[Np]; //The projected 1D histograms

int xbin_min;
int xbin_max;
double bin_xsize = TMath::Abs((xmax-xmin))/Np; //Define the width on x for one projection. Fit is done with equal length slices. 
float peak_pos[Np];


//for (int i = 0; i<Np; i++) peak_pos[i] = 0.9;   


float fitmin[Np]; //Minimum of fit range array from the fit center (Assymetrical fit range)
float fitmax[Np]; //Maximum of fit range array from the fit center (Assymetrical fit range)
int Nbin; //Number of bins in each projection
int start_bin;
int last_bin;

double mean[Np];
double mean_err[Np];
double sigma[Np];
double sigma_err[Np];
double chi_ndf[Np];
double x[Np][2]; //Array of edges in X axis of the projected histogram
double xmean[Np];
double xmean_err[Np];

TCanvas *c;

int Fit(int);
void Fit_Parameter(int);
void Write_parameters();

void SliceFit()
{
  gStyle->SetOptStat(kFALSE);
  TCanvas *c1 = new TCanvas ("c1","",xsize,ysize);
  TFile *file_in = new TFile("/projet/nucleon/hattawy/pass2_analysis/6gev_analysis/PID/eg6_test_plot.root", "Read");
  TH2D* histogram = (TH2D*) file_in->Get("h_etot_p");

/*
//mean
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           2.56084e-01   5.42227e-03   1.62750e-07   7.17789e-01
   2  p1           4.32374e-02   6.42143e-03   5.30495e-08   2.30741e+00
   3  p2          -9.14180e-03   2.54740e-03   1.59036e-08   7.66682e+00
   4  p3           8.15895e-04   3.32349e-04   4.56899e-09   2.75779e+01

// sigma
Minimizer is Linear
Chi2                      =  4.66357e-07
NDf                       =           12
p0                        =    0.0572976   +/-   0.00107303  
p1                        =   -0.0272689   +/-   0.00152639  
p2                        =   0.00857596   +/-   0.000665422 
p3                        = -0.000979978   +/-   9.03495e-05 

*/


  TF1 *mean = new TF1("mean","2.56084e-01 +4.32374e-02*x -9.14180e-03*x*x +8.15895e-04*x*x*x", 0.8, 5.0);
  TF1 *sigma_1 = new TF1("sigma_1","2.5*(0.0572976 -0.0272689*x +0.00857596*x*x -0.000979978*x*x*x )  + 2.56084e-01 +4.32374e-02*x -9.14180e-03*x*x +8.15895e-04*x*x*x", 0.8, 5.0);
  TF1 *sigma_2 = new TF1("sigma_2","-2.5* (0.0572976 -0.0272689*x +0.00857596*x*x -0.000979978*x*x*x )  + 2.56084e-01 +4.32374e-02*x -9.14180e-03*x*x +8.15895e-04*x*x*x", 0.8, 5.0);


       mean->SetLineColor(kBlack);
       mean->SetLineWidth(4);
       mean->SetLineStyle(7);

       sigma_1->SetLineColor(kRed);
       sigma_1->SetLineWidth(4);
       sigma_1->SetLineStyle(7);

       sigma_2->SetLineColor(kRed);
       sigma_2->SetLineWidth(4);
       sigma_2->SetLineStyle(7);

histogram->Draw("colz");
histogram->SetXTitle("p [GeV/c]");
histogram->SetYTitle("e_{tot}/p");
   mean->Draw("same"); sigma_1->Draw("same"); sigma_2->Draw("same");//p0->Draw("same");
   c1->Print("fit_etot_p.png");
  gStyle->SetOptFit(111);  

  start_bin = histogram->GetXaxis()->FindBin(xmin);
  last_bin = histogram->GetXaxis()->FindBin(xmax);
  Nbin = (last_bin-start_bin)/Np;

  cout<<start_bin<<"       "<<last_bin<<endl;
  cout << "Number of bins in each projection : " << Nbin <<endl;
 
  for (int i=0;i<Np;i++)
    {
      
    cout << "******Slice " << i+1 <<" ******"<< endl;
    //Reinitializing xbin_max and xbin_min
    int xbin_max =0; 
    int xbin_min =0;

    xbin_max = (i+1) * Nbin + start_bin - 1; 
    xbin_min = xbin_max - Nbin + 1;  
    cout << "xbin_min : " << xbin_min << " xbin_max : " << xbin_max <<endl;
    x[i][0] = histogram->GetXaxis()->GetBinLowEdge(xbin_min);   // get the value at the bottom of the projection range
    x[i][1] = histogram->GetXaxis()->GetBinLowEdge(xbin_max+1); // get the value at the top of the projection range
    xmean[i] = (x[i][0]+x[i][1])/2;
    xmean_err[i] = 0.0;            
                       
    cout << "******Creating Canvas******" <<endl;
    char* ctitle = new char[80];
    sprintf(ctitle,"Projection Fit: slice Number %d", i+1);
    c = new TCanvas ("c",ctitle,xsize,ysize); //Create HD canvas    
    char hname[80];

    sprintf (hname, "projection_%d", i);
    slice[i] = histogram->ProjectionY(hname,xbin_min,xbin_max); //Project the histogram on slice #i
    char* htitle = new char[80];
    sprintf(htitle,"Projection Fit: bin Number %d [%.2f, %.2f] %s",
i+1,x[i][0],x[i][1],unit);
    slice[i]->SetTitle(htitle);

    cout<<slice[i]->GetMaximumBin()<<"++++++++++++++++++++++"<<endl;
 
   if (slice[i]->GetEntries() > 100)
     {    
       //Fit with a gaussian and extract fit parameters
        peak_pos[i]= 0.3;
        fitmin[i]=-0.1;
        fitmax[i]=+0.1;
       int fit_test = Fit(i); 
        if (fit_test == 0)
         { 
           //Fit_Parameter(i);     // if the fit was sucessful, then extract and save parameters
           peak_pos[i]= fit[i]->GetParameter(1);
           fitmin[i]=-0.06;
           fitmax[i]=0.06;
           fit_test = Fit(i);
           Fit_Parameter(i);      
        c->Print(Form("plots/Fit_slice_%d.png",i+1));
        }
      }
    }

  Write_parameters();

delete c;
}

/****************** Functions **********************/

// Fit each projection with a Gaussian: 


int Fit(int NS)
 {     // function takes as option the slice number    
  
// do the fit between the chosen limits
  slice[NS]->Fit("gaus","Q","",peak_pos[NS]+fitmin[NS],peak_pos[NS]+fitmax[NS]);
  // save the fit function into the array
  fit[NS] = slice[NS]->GetFunction("gaus");       
  fit[NS]->SetLineColor(2);
  return 0;
  
  }

// Extracting the fit parameters:


void Fit_Parameter(int NS){     // option is slice number
  
  mean[NS] = fit[NS]->GetParameter(1);
  mean_err[NS] = fit[NS]->GetParError(1);
  sigma[NS] = fit[NS]->GetParameter(2);
  sigma_err[NS] = fit[NS]->GetParError(2);
  if (fit[NS]->GetNDF() != 0) chi_ndf[NS] = fit[NS]->GetChisquare() /
fit[NS]->GetNDF();
  else chi_ndf[NS] = -1.;
  
}

// Write the constants to an output file:

void Write_parameters()
 { 
  ofstream outfile;
  outfile.open("fit_parameters.dat");
  
  for (int i=0; i<Np; i++){


    outfile<<xmean[i]<<"     "<<mean[i]<<"    "<<mean_err[i]<<"     "<<sigma[i]<<"     "<<sigma_err[i]<<endl;
  }
  
  outfile.close();
  
  }
