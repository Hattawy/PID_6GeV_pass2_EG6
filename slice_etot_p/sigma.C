{
//=========Macro generated from canvas: c1/
//=========  (Wed Apr 15 13:53:16 2015) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",1,1,600,676);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(16);
   gre->SetName("Graph0");
   gre->SetTitle("electron: #sigma(etot/p) vs. p");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.99025,0.0376253);
   gre->SetPointError(0,0.1,1.41917e-05);
   gre->SetPoint(1,1.18375,0.0358422);
   gre->SetPointError(1,0.1,1.3349e-05);
   gre->SetPoint(2,1.37725,0.0333652);
   gre->SetPointError(2,0.1,1.19206e-05);
   gre->SetPoint(3,1.57075,0.0314931);
   gre->SetPointError(3,0.1,1.09431e-05);
   gre->SetPoint(4,1.76425,0.0303532);
   gre->SetPointError(4,0.1,1.06214e-05);
   gre->SetPoint(5,1.95775,0.02945);
   gre->SetPointError(5,0.1,1.05551e-05);
   gre->SetPoint(6,2.15125,0.0286554);
   gre->SetPointError(6,0.1,1.05612e-05);
   gre->SetPoint(7,2.34475,0.027995);
   gre->SetPointError(7,0.1,1.07755e-05);
   gre->SetPoint(8,2.53825,0.0273902);
   gre->SetPointError(8,0.1,1.09845e-05);
   gre->SetPoint(9,2.73175,0.0269258);
   gre->SetPointError(9,0.1,1.1531e-05);
   gre->SetPoint(10,2.92525,0.0264315);
   gre->SetPointError(10,0.1,1.19933e-05);
   gre->SetPoint(11,3.11875,0.0259455);
   gre->SetPointError(11,0.1,1.27904e-05);
   gre->SetPoint(12,3.31225,0.0253097);
   gre->SetPointError(12,0.1,1.34918e-05);
   gre->SetPoint(13,3.50575,0.0246952);
   gre->SetPointError(13,0.1,1.45852e-05);
   gre->SetPoint(14,3.69925,0.0241273);
   gre->SetPointError(14,0.1,1.62279e-05);
   gre->SetPoint(15,3.89275,0.0234592);
   gre->SetPointError(15,0.1,1.79309e-05);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","electron: #sigma(etot/p) vs. p",100,0.58,4.303);
   Graph_Graph2->SetMinimum(0.02202145);
   Graph_Graph2->SetMaximum(0.03905932);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("p [GeV]");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("#sigma(etot/p)");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
