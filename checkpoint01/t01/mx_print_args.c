#include <unistd.h>

int mx_strlen(const char*s)
{
	int i = 0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	return i;
}

int main(int argc, char const *argv[])
{
	if(argc == 1) return 0;
	for (int i = 1; i < argc; ++i)
	{
		write(1, argv[i], mx_strlen(argv[i]));
		write(1, "\n", 1);
	}
	return 0;
}

