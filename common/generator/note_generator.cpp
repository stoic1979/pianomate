#include <iostream>

#include "note_generator.h"
#include "indian_note_generator.h"
#include "western_note_generator.h"

using namespace std;

NoteGenerator* NoteGenerator::CreateNoteGenerator(MusicNotation musicNotation) {
  if (musicNotation == IndianNotation) {
    return new IndianNoteGenerator();
  } else {
    return new WesternNoteGenerator();
  }
}

vector<Note> NoteGenerator::GenerateRandomNotes(int count, bool repeat) {

  vector<Note> notes;

  static int prev = 0; 
  for( int i = 0; i < count; i++) {
    int value = rand() % 7 + 1;
    if (!repeat && value == prev) {
      i--;
      continue;
    }
    prev = value;

    Note note;
    note.name = _mapNotes[value];
    note.value = value;
    notes.push_back(note);
  }

  return notes;
}

void NoteGenerator::PrintNotes(vector<Note> notes) {
  for( int i = 0; i < notes.size(); i++) {
    Note note = notes[i];
    cout << note.name << " - " << note.value << endl;
  }
}

void NoteGenerator::SerializeNotes(vector<Note> notes) {
  throw runtime_error("Implemetation need to serialize notes to JSON");
}
