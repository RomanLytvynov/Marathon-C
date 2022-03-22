#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void)
{
	char*str1 = "Follow the white rabbit.\n";
	char*str2 = "Knock, knock, Neo.\n";

	write(1, str1, strlen(str1));
	write(1, str2, strlen(str2));
}

