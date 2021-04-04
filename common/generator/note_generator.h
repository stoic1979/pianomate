#ifndef __NOTE_GENERATOR_H__
#define __NOTE_GENERATOR_H__


struct Note {
  std::string name;
  int value;
};

class NoteGenerator {

  virtual void GenerateRandomNotes(int count, bool repeat=true) = 0;

};

#endif
