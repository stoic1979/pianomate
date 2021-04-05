#ifndef __WESTERN_NOTE_GENERATOR_H__
#define __WESTERN_NOTE_GENERATOR_H__

#include "note_generator.h"

class WesternNoteGenerator: public NoteGenerator {

  public:
    WesternNoteGenerator();

    virtual std::vector<Note> GenerateRandomNotes(int count, bool repeat=true);
    virtual void PrintNotes(std::vector<Note> notes);
    virtual void SerializeNotes(std::vector<Note> notes);
    virtual MusicNotation GetMusicNotation();
};

#endif
