{
//=========Macro generated from canvas: c1/
//=========  (Wed Apr 15 13:53:16 2015) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,700);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(16);
   gre->SetName("Graph0");
   gre->SetTitle("electron: <etot/p> vs. p");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.99025,0.290481);
   gre->SetPointError(0,0.1,1.16175e-05);
   gre->SetPoint(1,1.18375,0.29552);
   gre->SetPointError(1,0.1,1.13708e-05);
   gre->SetPoint(2,1.37725,0.300771);
   gre->SetPointError(2,0.1,1.08027e-05);
   gre->SetPoint(3,1.57075,0.304904);
   gre->SetPointError(3,0.1,1.04305e-05);
   gre->SetPoint(4,1.76425,0.308548);
   gre->SetPointError(4,0.1,1.04474e-05);
   gre->SetPoint(5,1.95775,0.311745);
   gre->SetPointError(5,0.1,1.05999e-05);
   gre->SetPoint(6,2.15125,0.314913);
   gre->SetPointError(6,0.1,1.0795e-05);
   gre->SetPoint(7,2.34475,0.317585);
   gre->SetPointError(7,0.1,1.11594e-05);
   gre->SetPoint(8,2.53825,0.32026);
   gre->SetPointError(8,0.1,1.15303e-05);
   gre->SetPoint(9,2.73175,0.322497);
   gre->SetPointError(9,0.1,1.21294e-05);
   gre->SetPoint(10,2.92525,0.324747);
   gre->SetPointError(10,0.1,1.27743e-05);
   gre->SetPoint(11,3.11875,0.326702);
   gre->SetPointError(11,0.1,1.36381e-05);
   gre->SetPoint(12,3.31225,0.328809);
   gre->SetPointError(12,0.1,1.46491e-05);
   gre->SetPoint(13,3.50575,0.330543);
   gre->SetPointError(13,0.1,1.59669e-05);
   gre->SetPoint(14,3.69925,0.332188);
   gre->SetPointError(14,0.1,1.78129e-05);
   gre->SetPoint(15,3.89275,0.333945);
   gre->SetPointError(15,0.1,2.02573e-05);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","electron: <etot/p> vs. p",100,0.58,4.303);
   Graph_Graph1->SetMinimum(0.2861198);
   Graph_Graph1->SetMaximum(0.3383149);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("p [GeV]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("<etot/p>");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
