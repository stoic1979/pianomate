#ifndef __MATH_TEST_H__
#define __MATH_TEST_H__

#include <cppunit/extensions/HelperMacros.h>

class Math;

class MathTest : public CppUnit::TestFixture {
  CPPUNIT_TEST_SUITE(MathTest);
  CPPUNIT_TEST(testAddition);
  CPPUNIT_TEST_SUITE_END();

  public:
    void setUp();
    void tearDown();

  private:
    void testAddition();
    Math *_math;
};

#endif
