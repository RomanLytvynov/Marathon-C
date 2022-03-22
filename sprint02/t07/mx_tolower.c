#include <stdio.h>
#include <stdbool.h>

char mx_tolower(int c)
{
	if(c > 64 && c < 91) return ((char) c + 32);
	else if(c > 96 && c < 123) return ((char) c);
	else return (char) c;
}

