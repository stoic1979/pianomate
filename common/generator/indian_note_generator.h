#ifndef __INDIAN_NOTE_GENERATOR_H__
#define __INDIAN_NOTE_GENERATOR_H__

#include "note_generator.h"

class IndianNoteGenerator : public NoteGenerator {

  public:
    IndianNoteGenerator();

    virtual std::vector<Note> GenerateRandomNotes(int count, bool repeat=true);
    virtual void PrintNotes(std::vector<Note> notes);
    virtual void SerializeNotes(std::vector<Note> notes);
    virtual MusicNotation GetMusicNotation();

    Note CreateNote(int value);

};

#endif
