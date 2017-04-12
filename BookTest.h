#include "UnitTest.h"
#include "Book.h"

class BookTest : public UnitTest
{
public:
	void runTest()
	{
		Book book("Cosmos");
		UT_ASSERT(!strcmp(book.title, "Cosmos"));
	}
};
