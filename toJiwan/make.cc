#include <TChain.h>


void make()
{
  TChain *ch = new TChain("ch", "eg6_pass2");
  ch->Add("/projet/nucleon2/eg6/pass2/6GeV/pass2v0/hroot_1e_6151*.root/h10_1e"); 
  //ch->Add("/projet/nucleon/hattawy/complete_6gev_data/hroot_1e_61*.root/h10_1e");  
  ch->MakeClass("eg6_pass2");
}
