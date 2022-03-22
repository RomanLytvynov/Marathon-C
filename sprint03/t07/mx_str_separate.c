void mx_printchar(char c);

int mx_length(const char*s)
{
    int i = 0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}

void mx_str_separate(const char*str, char delim)
{
	for(int i = 0; i < mx_length(str); i++)
	{
		if(*(str + i) == delim) 
		{
			for(int j = i; *(str + j) == delim; j++)
			{
				i++;
			}
			i--;
			mx_printchar('\n');
		}
		else mx_printchar(*(str + i));
	}
	mx_printchar('\n');
}

