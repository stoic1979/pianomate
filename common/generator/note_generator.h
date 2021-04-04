#ifndef __NOTE_GENERATOR_H__
#define __NOTE_GENERATOR_H__


struct Note {
  std::string name;
  int value;
};

enum MusicNotation {
  IndianNotation = 1,
  WesterNotation
};

class NoteGenerator {

  virtual void GenerateRandomNotes(int count, bool repeat=true) = 0;

};

#endif
