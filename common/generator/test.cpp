#include <iostream>

#include "note_generator.h"

using namespace std;

int main() {
  cout << endl;
  NoteGenerator* indianGenerator = NoteGenerator::CreateNoteGenerator(IndianNotation);
  vector<Note> indianNotes = indianGenerator->GenerateRandomNotes(5);
  indianGenerator->PrintNotes(indianNotes);

  NoteGenerator* westernGenerator = NoteGenerator::CreateNoteGenerator(WesterNotation);
  vector<Note> westernNotes = westernGenerator->GenerateRandomNotes(12);
  westernGenerator->PrintNotes(westernNotes);
  cout << endl;
}
