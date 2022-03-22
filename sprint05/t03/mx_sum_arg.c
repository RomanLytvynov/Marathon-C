#include <stdbool.h>

void mx_printint(int n);

void mx_printchar(char c);

bool mx_isspace(char c);

int mx_atoi(const char*str);

int main(int argc, char const *argv[])
{
	if(argc == 1) return 0;
	int suma = 0;
	for (int i = 1; i < argc; ++i)
	{
		suma+=mx_atoi(argv[i]);
	}
	mx_printint(suma);
	mx_printchar('\n');
	return 0;
}

