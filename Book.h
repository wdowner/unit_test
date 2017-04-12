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
