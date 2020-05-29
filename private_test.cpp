#include "private.h"
#include "unity.h"

void Private::executeTest (void)
{
	myNumber = 3;
	TEST_ASSERT_EQUAL_INT(3,myNumber);
	more();
	TEST_ASSERT_EQUAL_INT(4,myNumber);
}
