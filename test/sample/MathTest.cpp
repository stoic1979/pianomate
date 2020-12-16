#include "MathTest.h"
#include "Math.h"

CPPUNIT_TEST_SUITE_REGISTRATION( MathTest );

void MathTest::setUp() {
  _math = new Math();
}

void MathTest::tearDown() {
  delete _math;
}

void MathTest::testAddition() {
  CPPUNIT_ASSERT( 5 == _math->Sum(2, 3));
}

