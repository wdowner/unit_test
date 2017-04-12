#ifndef _BOOK_H_
#define _BOOK_H_

#include "string.h"

class Book
{
public:
	Book(const char* title) 
	{
		strcpy(this->title, title);
	}

	char title[255];
};

#endif
