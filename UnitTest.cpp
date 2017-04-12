#include <stdio.h>
#include <stdlib.h>
#include "UnitTest.h"

int UnitTest::num_test_success = 0;
int UnitTest::num_tests = 0;

void UnitTest::assertTrue(bool condition, const char *file, int line, const char *msg)
{
	++num_tests;

	if (!(condition))
	{
		printf("FAILURE!\n");
		printf("%s:%d:%s\n", file, line, msg);
	}
	else
	{
		++num_test_success;
	}
}
