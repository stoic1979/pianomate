#include <iostream>
#include "indian_note_generator.h"

using namespace std;

IndianNoteGenerator::IndianNoteGenerator(): NoteGenerator(_mapNotes) {
    _mapNotes = {
      {1, "Sa"},
      {2, "Re"},
      {3, "Ga"},
      {4, "Ma"},
      {5, "Pa"},
      {6, "Dha"},
      {7, "Ni"}
    };
}

vector<Note> IndianNoteGenerator::GenerateRandomNotes(int count, bool repeat) {
  return NoteGenerator::GenerateRandomNotes(count, repeat);
}

void IndianNoteGenerator::PrintNotes(vector<Note> notes) {
  NoteGenerator::PrintNotes(notes);
}

void IndianNoteGenerator::SerializeNotes(vector<Note> notes) {
  NoteGenerator::SerializeNotes(notes);
}

MusicNotation IndianNoteGenerator::GetMusicNotation() {
  return IndianNotation;
}
