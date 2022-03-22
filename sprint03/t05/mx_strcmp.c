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

int mx_strcmp(const char*s1, const char*s2)
{
    if(mx_length(s1) > mx_length(s2)) return 1;
    else if(mx_length(s1) < mx_length(s2)) return -1;
    else
    {
        for(int i = 0; i < mx_length(s1); i++)
        {
            if((s1[i]!=s2[i]) && ((int)s1[i]<(int)s2[i])) return -1;
            else if ((s1[i]!=s2[i]) && ((int)s1[i]>(int)s2[i])) return 1;
            else continue;
        }
        return 0;
    }
}

