#include <unistd.h>
#include "mx_printchar.c"

void mx_isos_triangle(unsigned int length, char c)
{
	int counter = 1;
	for (unsigned int i = 0; i < length; ++i)
	{
		for (int j = 0; j < counter; ++j)
		{
			mx_printchar(c);
		}
		mx_printchar('\n');
		counter++;
	}
}

