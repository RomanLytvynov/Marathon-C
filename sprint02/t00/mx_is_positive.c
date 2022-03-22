#include <unistd.h>
#include "mx_printstr.c"

void mx_is_positive(int i);

int main()
{
	mx_is_positive(0);
	return 0;
}

void mx_is_positive(int i)
{
	if(i>0) mx_printstr("positive\n");
	else if (i<0) mx_printstr("negative\n");
	else mx_printstr("equal to 0\n");
}

