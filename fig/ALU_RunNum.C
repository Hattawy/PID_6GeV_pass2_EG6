{
//=========Macro generated from canvas: c44/
//=========  (Wed May  6 22:03:12 2015) by ROOT version5.34/18
   TCanvas *c44 = new TCanvas("c44", "",0,0,1300,550);
   gStyle->SetOptStat(0);
   c44->Range(61395.29,-0.001753247,62049.71,0.001268372);
   c44->SetFillColor(0);
   c44->SetBorderMode(0);
   c44->SetBorderSize(0);
   c44->SetLeftMargin(0.16);
   c44->SetRightMargin(0.16);
   c44->SetTopMargin(0.16);
   c44->SetBottomMargin(0.16);
   c44->SetFrameBorderMode(0);
   c44->SetFrameBorderMode(0);
   
   TH1D *h_A_RunNum = new TH1D("h_A_RunNum","A_{C} vs. Run number",450,61500,61945);
   h_A_RunNum->SetBinContent(409,-0.001176604);
   h_A_RunNum->SetBinContent(411,0.00068707);
   h_A_RunNum->SetEntries(2);
   h_A_RunNum->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   h_A_RunNum->SetLineColor(ci);
   h_A_RunNum->SetLineWidth(2);
   h_A_RunNum->GetXaxis()->SetTitle("Run Number");
   h_A_RunNum->GetXaxis()->SetLabelFont(22);
   h_A_RunNum->GetXaxis()->SetLabelSize(0.05);
   h_A_RunNum->GetXaxis()->SetTitleSize(0.06);
   h_A_RunNum->GetXaxis()->SetTitleFont(22);
   h_A_RunNum->GetYaxis()->SetTitle("A_{C}");
   h_A_RunNum->GetYaxis()->SetLabelFont(22);
   h_A_RunNum->GetYaxis()->SetLabelSize(0.05);
   h_A_RunNum->GetYaxis()->SetTitleSize(0.06);
   h_A_RunNum->GetYaxis()->SetTitleOffset(1.2);
   h_A_RunNum->GetYaxis()->SetTitleFont(22);
   h_A_RunNum->GetZaxis()->SetLabelFont(22);
   h_A_RunNum->GetZaxis()->SetLabelSize(0.03);
   h_A_RunNum->GetZaxis()->SetTitleSize(0.035);
   h_A_RunNum->GetZaxis()->SetTitleFont(22);
   h_A_RunNum->Draw("");
   
   TPaveText *pt = new TPaveText(0.3958642,0.9283333,0.6041358,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("A_{C} vs. Run number");
   pt->Draw();
   c44->Modified();
   c44->cd();
   c44->SetSelected(c44);
}
