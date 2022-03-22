#include <stdio.h>

void mx_printchar(char c);

void mx_printstr(const char*s);

int mx_strlen(const char*s);

int main(int argc, char const *argv[])
{
	argc++;
	argc--;
	int i = 0;
	for (i = mx_strlen(argv[0]) - 1; *(argv[0]+i) != '/'; --i)
	{

	}
	mx_printstr(argv[0] + ++i);
	mx_printchar('\n');
	return 0;
}

