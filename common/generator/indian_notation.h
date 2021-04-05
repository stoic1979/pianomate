#ifndef __RAAG_KAAFI_H__
#define __RAAG_KAAFI_H__

//-----------------------------------------------------------
// Note = Svar
// Shudh Svar - Sa, Re, Ga, Ma, Pa, Dha, Ni
// Saptak - combination of seven notes/svar
// Saptak - sapt (sever) + akshar
//
// Komal Svar (Flat notes) - Re, Ga, Dha, Ni
//
//
// Tivra svar (Sharp notes) - Ma
//-----------------------------------------------------------


enum IndianNote {
  Sa = 1,
  Re,
  Ga,
  Ma,
  Pa,
  Dha,
  Ni
};

void GenerateIndianNotes(int count, bool repeat=true);
void IndianNoteToString(IndianNote note);


#endif
