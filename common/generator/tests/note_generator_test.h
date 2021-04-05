#ifndef __NOTE_GENERATOR_TEST_H__
#define __NOTE_GENERATOR_TEST_H__

#include "gtest/gtest.h"
#include "note_generator.h"


class NoteGeneratorTest: public ::testing::Test {

  public:
    virtual void SetUp() {
      indianGenerator = NoteGenerator::CreateNoteGenerator(IndianNotation);
      westernGenerator = NoteGenerator::CreateNoteGenerator(WesterNotation);
    }

    virtual void TearDown() {
      delete indianGenerator;
      delete westernGenerator;
    }

  protected:
    NoteGenerator* indianGenerator;
    NoteGenerator* westernGenerator;
};

#endif
