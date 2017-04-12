#ifndef _LIBRARY_TEST_H_
#define _LIBRARY_TEST_H_

#include "UnitTest.h"
#include "Library.h"

class LibraryTest : public UnitTest
{
public:
	void runTest()
	{
		// Create Library
		Library library;

		// Add a book to the library
		Book *book = new Book( "Cosmos" );
		library.addBook( book );

		// Lookup a book in the library
		Book *book2;
		book2 = library.getBook( "Cosmos" );
		UT_ASSERT( !strcmp(book2->title, "Cosmos"));
	}
};

#endif
