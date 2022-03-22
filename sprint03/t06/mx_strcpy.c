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

char * mx_strcpy(char * dst, const char * src)
{
	int count = mx_length(src);
	for(int i = 0; i < count; i++)
	{
		*(dst + i) = *(src+i);
	}
	*(dst + count1 + count2) = '\0';
	return dst;
}

