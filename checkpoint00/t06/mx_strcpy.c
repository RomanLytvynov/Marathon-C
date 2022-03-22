int mx_strlen(const char *s)
{
    int counter = 0;
    for(int i = 0; i < *(s + i); i++) counter++;
    return counter;
}

char*mx_strcpy (char*dst, const char*src)
{
    int i;
    for(i = 0; i < *(src + i); i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

