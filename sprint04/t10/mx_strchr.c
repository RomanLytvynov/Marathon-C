char*mx_strchr(char*s, int c)
{
    int i=0;
    char*s1 = s;
    while(s1[i]!='\0')
    {
        if(s1[i]==c)
        {
            return (char*)&s1[i+1];
        }
        i++;
    }
    return 0;
}

