{
//=========Macro generated from canvas: cfig3/fig3
//=========  (Sun Dec 22 21:13:14 2013) by ROOT version5.32/00
   TCanvas *cfig3 = new TCanvas("cfig3", "fig3",83,105,600,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cfig3->Range(-17.56098,-0.5696203,92.19512,2.594937);
   cfig3->SetFillColor(0);
   cfig3->SetBorderMode(0);
   cfig3->SetBorderSize(2);
   cfig3->SetTickx(1);
   cfig3->SetTicky(1);
   cfig3->SetLeftMargin(0.16);
   cfig3->SetRightMargin(0.02);
   cfig3->SetTopMargin(0.03);
   cfig3->SetBottomMargin(0.18);
   cfig3->SetFrameBorderMode(0);
   cfig3->SetFrameBorderMode(0);
   
   TH2D *htmp3 = new TH2D("htmp3","",1,0,90,1,0,2.5);
   htmp3->GetXaxis()->SetNdivisions(505);
   htmp3->GetXaxis()->SetLabelFont(42);
   htmp3->GetXaxis()->SetLabelSize(0.07);
   htmp3->GetXaxis()->SetTitleSize(0.035);
   htmp3->GetXaxis()->SetTitleColor(0);
   htmp3->GetXaxis()->SetTitleFont(42);
   htmp3->GetYaxis()->SetNdivisions(505);
   htmp3->GetYaxis()->SetLabelFont(42);
   htmp3->GetYaxis()->SetLabelSize(0.07);
   htmp3->GetYaxis()->SetTitleSize(0.035);
   htmp3->GetYaxis()->SetTitleFont(42);
   htmp3->GetZaxis()->SetLabelFont(42);
   htmp3->GetZaxis()->SetLabelSize(0.035);
   htmp3->GetZaxis()->SetTitleSize(0.035);
   htmp3->GetZaxis()->SetTitleFont(42);
   htmp3->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,7.5,0.763639);
   gre->SetPointError(0,0,0.037673);
   gre->SetPoint(1,22.5,0.768166);
   gre->SetPointError(1,0,0.095342);
   gre->SetPoint(2,37.5,1.526158);
   gre->SetPointError(2,0,0.120129);
   gre->SetPoint(3,52.5,1.403567);
   gre->SetPointError(3,0,0.047948);
   gre->SetPoint(4,67.5,1.478773);
   gre->SetPointError(4,0,0.07344);
   gre->SetPoint(5,82.5,1.451724);
   gre->SetPointError(5,0,0.050469);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,90);
   Graph_Graph13->SetMinimum(0.5754777);
   Graph_Graph13->SetMaximum(1.743633);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleColor(0);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph13);
   
   gre->Draw("p");
   TMarker *marker = new TMarker(0.7,0.9,20);
   marker->SetMarkerColor(2);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(2);
   marker->Draw();
   TLatex *   tex = new TLatex(0.73,0.9,"4-Gaus fit");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextColor(2);
   tex->SetLineWidth(2);
   tex->Draw();
   
   gre = new TGraphErrors(4);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(209);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(209);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,37.5,0.719621);
   gre->SetPointError(0,0,0.116325);
   gre->SetPoint(1,52.5,1.308178);
   gre->SetPointError(1,0,0.034706);
   gre->SetPoint(2,67.5,1.268221);
   gre->SetPointError(2,0,0.036536);
   gre->SetPoint(3,82.5,1.123671);
   gre->SetPointError(3,0,0.042728);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Graph",100,33,87);
   Graph_Graph14->SetMinimum(0.5293372);
   Graph_Graph14->SetMaximum(1.416843);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleColor(0);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph14);
   
   gre->Draw("p");
   marker = new TMarker(0.7,0.84,24);
   marker->SetMarkerColor(209);
   marker->SetMarkerStyle(24);
   marker->SetMarkerSize(2);
   marker->Draw();
      tex = new TLatex(0.73,0.84,"2-Gaus fit to AS");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextColor(209);
   tex->SetLineWidth(2);
   tex->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(2);
   gre->SetPoint(0,7.5,0.648446);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,22.5,0.790307);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,37.5,1.572288);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,52.5,1.423672);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,67.5,1.441734);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,82.5,1.205461);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Graph",100,0,90);
   Graph_Graph15->SetMinimum(0.5560618);
   Graph_Graph15->SetMaximum(1.664672);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleColor(0);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph15);
   
   gre->Draw("l");
   TLine *line = new TLine(51.3,2.275,56.7,2.275);
   line->SetLineColor(2);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(58.86,2.275,"");
   tex->SetTextAlign(12);
   tex->SetTextColor(2);
   tex->SetLineWidth(2);
   tex->Draw();
   
   gre = new TGraphErrors(4);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(209);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);
   gre->SetPoint(0,37.5,1.337094);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,52.5,1.361893);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,67.5,1.144538);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,82.5,0.596175);
   gre->SetPointError(3,0,0);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,33,87);
   Graph_Graph16->SetMinimum(0.5196032);
   Graph_Graph16->SetMaximum(1.438465);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleColor(0);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph16);
   
   gre->Draw("l");
   line = new TLine(51.3,2.1,56.7,2.1);
   line->SetLineColor(209);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(58.86,2.1,"");
   tex->SetTextAlign(12);
   tex->SetTextColor(209);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.22,0.92,"(c)");
tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextSize(0.065);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.26,0.92,"Au+Au 200 GeV, 20-60%");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.26,0.86,"3 < p_{T}^{(t)} < 4 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.26,0.78,"1 < p_{T}^{(a)} < 2 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.03,0.55,"Double-peak position #theta [rad]");
tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextSize(0.07);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.57,0.1,"#phi_{s}  [deg]");
tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   cfig3->Modified();
   cfig3->cd();
   cfig3->SetSelected(cfig3);
}
