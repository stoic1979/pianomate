#include "western_note_generator.h"

using namespace std;

WesternNoteGenerator::WesternNoteGenerator():NoteGenerator(_mapNotes) {
    _mapNotes = {
      {1, "Do"},
      {2, "Re"},
      {3, "Mi"},
      {4, "Fa"},
      {5, "So"},
      {6, "La"},
      {7, "Ti"}
    };
}

vector<Note> WesternNoteGenerator::GenerateRandomNotes(int count, bool repeat) {
  return NoteGenerator::GenerateRandomNotes(count, repeat);
}

void WesternNoteGenerator::PrintNotes(vector<Note> notes) {
  NoteGenerator::PrintNotes(notes);
}

void WesternNoteGenerator::SerializeNotes(vector<Note> notes) {
  NoteGenerator::SerializeNotes(notes);
}

MusicNotation WesternNoteGenerator::GetMusicNotation() {
  return WesterNotation;
}

