#include <iostream>

#include "gtest/gtest.h"
#include "note_generator_test.h"
#include "indian_note_generator.h"

using namespace std;

TEST_F(NoteGeneratorTest, GenerateIndianNotes){
  vector<Note> indianNotes = indianGenerator->GenerateRandomNotes(5);
  indianGenerator->PrintNotes(indianNotes);
};

TEST_F(NoteGeneratorTest, GenerateWesternNotes){
  vector<Note> westernNotes = westernGenerator->GenerateRandomNotes(12);
  westernGenerator->PrintNotes(westernNotes);
};


int main(int argc, char**argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
