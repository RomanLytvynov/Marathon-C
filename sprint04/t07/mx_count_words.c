#include <stdbool.h>

bool mx_isalpha(int c)
{
	if(c>=65 && c<=122)
		return true;
	else return false;
}

int mx_count_words(const char*str, char delimiter)
{
	int counter = 0;
	int i = 0;

	if(delimiter != ' ' && !mx_isalpha(delimiter))
	{
		while(*(str + i)!= '\0')
		{
			if(mx_isalpha(str[i]))
			{
				int j = i;
				while(true) 
				{
					if(str[j]==delimiter) break;
				    if(str[j]=='\0') break;
				    j++;
				}
				i = j;
				counter++;
			}
			else
			i++;
		}
	}
	else
	{
		while(*(str + i)!= '\0')
		{
			if(str[i]!=delimiter)
			{
				int j = i;
				while(true) 
				{
					if(str[j]==delimiter) break;
				    if(str[j]=='\0') break;
				    j++;
				}
				i = j;
				counter++;
			}
			else i++;
		}
	}
	return counter;
}

