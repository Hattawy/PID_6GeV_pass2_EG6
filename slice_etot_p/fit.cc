#include "Riostream.h"
#include <iostream>
#include <TFile.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TF1.h>
#include <TLine.h>
#include <TStyle.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TLatex.h>


void fit(){

int N = 16;
float p[N] ;
float p_err[N];
float mean[N];
float mean_err[N];
float sigma[N];
float sigma_err[N];
float parameters[N][5];
 
ifstream myfile;
myfile.open("fit_parameters.dat");
for(int i =0; i<N; i++){
 for(int j =0; j<5; j++){
   myfile>>parameters[i][j];}}
myfile.close();

for(int i =0; i<N; i++){
  mean[i] = parameters[i][1];
  mean_err[i] = parameters[i][2];
  sigma[i] = parameters[i][3];  
  sigma_err[i] = parameters[i][4];
  p[i] = parameters[i][0];
  p_err[i] = 0.1;
  cout<< mean[i]<<"    "<<mean_err[i]<<"     "<<sigma[i]<<"      "<<sigma_err[i]<<endl;
  }

 TCanvas *c1 = new TCanvas("c1","", 600,700);
 c1->cd();
   TF1 *myfit = new TF1("myfit","[0]*x + [1]",1.6,4.0);
  float alpha= 0.;
  float alpha_err= 0.;
  float beta= 0.;
  float beta_err=0.;

   TGraphErrors *p_mean = new TGraphErrors(N, p, mean, p_err, mean_err);
   p_mean->SetTitle("electron: <etot/p> vs. p");
   p_mean->GetYaxis()->SetTitle("<etot/p>");
   p_mean->GetXaxis()->SetTitle("p [GeV]");
   p_mean->SetMarkerStyle(21);
   p_mean->Draw("AP");
   c1->Print("mean.C");


   TGraphErrors *p_sigma = new TGraphErrors(N, p, sigma, p_err, sigma_err);
   p_sigma->SetTitle("electron: #sigma(etot/p) vs. p");
   p_sigma->GetYaxis()->SetTitle("#sigma(etot/p)");
   p_sigma->GetXaxis()->SetTitle("p [GeV]");
   p_sigma->SetMarkerStyle(21);
   p_sigma->Draw("AP");
   c1->Print("sigma.C");


 delete c1;
}
