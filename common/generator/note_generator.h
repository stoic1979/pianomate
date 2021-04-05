#ifndef __NOTE_GENERATOR_H__
#define __NOTE_GENERATOR_H__

#include <string>
#include <vector>
#include <map>

struct Note {
  std::string name;
  int value;
};

enum MusicNotation {
  IndianNotation = 1,
  WesterNotation
};

class NoteGenerator {

  public:
    static NoteGenerator* CreateNoteGenerator(MusicNotation musicNotation);

    NoteGenerator(std::map <int, std::string> mapNotes): _mapNotes(mapNotes){}

    virtual std::vector<Note> GenerateRandomNotes(int count, bool repeat=true);
    virtual void PrintNotes(std::vector<Note> notes);
    virtual void SerializeNotes(std::vector<Note> notes);

    virtual MusicNotation GetMusicNotation() = 0;

  protected:
    std::map <int, std::string> _mapNotes;
};

#endif
