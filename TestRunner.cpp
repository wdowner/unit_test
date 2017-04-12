#include "stdio.h"
#include "BookTest.h"
#include "LibraryTest.h"

int main()
{
	BookTest test;
	test.runTest();

	LibraryTest test2;
	test2.runTest();

	if ( UnitTest::getNumTests() == UnitTest::getNumSuccess())
	{
		printf("SUCCESS!\n");
	}

	printf("%d tests completed successfully\n", UnitTest::getNumSuccess());
	return 0;
}
