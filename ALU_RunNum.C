void ALU_RunNum()
{
//=========Macro generated from canvas: c44/
//=========  (Thu Jun 22 17:18:11 2017) by ROOT version6.09/01
   TCanvas *c44 = new TCanvas("c44", "",0,0,1300,550);
   gStyle->SetOptStat(0);
   c44->Range(61395.29,-0.01589686,62049.71,0.007728035);
   c44->SetFillColor(0);
   c44->SetBorderMode(0);
   c44->SetBorderSize(0);
   c44->SetLeftMargin(0.16);
   c44->SetRightMargin(0.16);
   c44->SetTopMargin(0.16);
   c44->SetBottomMargin(0.16);
   c44->SetFrameBorderMode(0);
   c44->SetFrameBorderMode(0);
   
   TH1D *h_A_RunNum__81 = new TH1D("h_A_RunNum__81","A_{C} vs. Run number",450,61500,61945);
   h_A_RunNum__81->SetBinContent(11,-0.0014654);
   h_A_RunNum__81->SetBinContent(12,-0.0006509579);
   h_A_RunNum__81->SetBinContent(13,-0.000392887);
   h_A_RunNum__81->SetBinContent(14,-0.0007194736);
   h_A_RunNum__81->SetBinContent(15,-0.002671552);
   h_A_RunNum__81->SetBinContent(20,-0.0002976119);
   h_A_RunNum__81->SetBinContent(21,-0.001376451);
   h_A_RunNum__81->SetBinContent(22,6.297626e-05);
   h_A_RunNum__81->SetBinContent(23,-0.000125927);
   h_A_RunNum__81->SetBinContent(24,-0.00206612);
   h_A_RunNum__81->SetBinContent(25,0.0002597395);
   h_A_RunNum__81->SetBinContent(26,-0.000705288);
   h_A_RunNum__81->SetBinContent(32,-0.0001803073);
   h_A_RunNum__81->SetBinContent(33,-0.001018625);
   h_A_RunNum__81->SetBinContent(34,-0.0006604316);
   h_A_RunNum__81->SetBinContent(35,-0.000332744);
   h_A_RunNum__81->SetBinContent(36,-5.290999e-05);
   h_A_RunNum__81->SetBinContent(37,0.0001589542);
   h_A_RunNum__81->SetBinContent(38,-0.0001279643);
   h_A_RunNum__81->SetBinContent(39,-0.002828584);
   h_A_RunNum__81->SetBinContent(41,0.001591527);
   h_A_RunNum__81->SetBinContent(42,-0.005694156);
   h_A_RunNum__81->SetBinContent(46,-0.001867464);
   h_A_RunNum__81->SetBinError(11,0.0014654);
   h_A_RunNum__81->SetBinError(12,0.0006509579);
   h_A_RunNum__81->SetBinError(13,0.000392887);
   h_A_RunNum__81->SetBinError(14,0.0007194736);
   h_A_RunNum__81->SetBinError(15,0.002671552);
   h_A_RunNum__81->SetBinError(20,0.0002976119);
   h_A_RunNum__81->SetBinError(21,0.001376451);
   h_A_RunNum__81->SetBinError(22,6.297626e-05);
   h_A_RunNum__81->SetBinError(23,0.000125927);
   h_A_RunNum__81->SetBinError(24,0.00206612);
   h_A_RunNum__81->SetBinError(25,0.0002597395);
   h_A_RunNum__81->SetBinError(26,0.000705288);
   h_A_RunNum__81->SetBinError(32,0.0001803073);
   h_A_RunNum__81->SetBinError(33,0.001018625);
   h_A_RunNum__81->SetBinError(34,0.0006604316);
   h_A_RunNum__81->SetBinError(35,0.000332744);
   h_A_RunNum__81->SetBinError(36,5.290999e-05);
   h_A_RunNum__81->SetBinError(37,0.0001589542);
   h_A_RunNum__81->SetBinError(38,0.0001279643);
   h_A_RunNum__81->SetBinError(39,0.002828584);
   h_A_RunNum__81->SetBinError(41,0.001591527);
   h_A_RunNum__81->SetBinError(42,0.005694156);
   h_A_RunNum__81->SetBinError(46,0.001867464);
   h_A_RunNum__81->SetEntries(23);
   h_A_RunNum__81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_A_RunNum__81->SetLineColor(ci);
   h_A_RunNum__81->SetLineWidth(2);
   h_A_RunNum__81->GetXaxis()->SetTitle("Run Number");
   h_A_RunNum__81->GetXaxis()->SetLabelFont(22);
   h_A_RunNum__81->GetXaxis()->SetLabelSize(0.05);
   h_A_RunNum__81->GetXaxis()->SetTitleSize(0.06);
   h_A_RunNum__81->GetXaxis()->SetTitleFont(22);
   h_A_RunNum__81->GetYaxis()->SetTitle("A_{C}");
   h_A_RunNum__81->GetYaxis()->SetLabelFont(22);
   h_A_RunNum__81->GetYaxis()->SetLabelSize(0.05);
   h_A_RunNum__81->GetYaxis()->SetTitleSize(0.06);
   h_A_RunNum__81->GetYaxis()->SetTitleOffset(1.2);
   h_A_RunNum__81->GetYaxis()->SetTitleFont(22);
   h_A_RunNum__81->GetZaxis()->SetLabelFont(22);
   h_A_RunNum__81->GetZaxis()->SetLabelSize(0.03);
   h_A_RunNum__81->GetZaxis()->SetTitleSize(0.035);
   h_A_RunNum__81->GetZaxis()->SetTitleFont(22);
   h_A_RunNum__81->Draw("");
   
   TPaveText *pt = new TPaveText(0.3958642,0.9283333,0.6041358,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("A_{C} vs. Run number");
   pt->Draw();
   c44->Modified();
   c44->cd();
   c44->SetSelected(c44);
}
