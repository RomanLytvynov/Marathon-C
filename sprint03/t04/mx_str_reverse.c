int mx_strlen(const char*s);

void mx_swap_char(char*s1, char*s2);

void mx_str_reverse(char*s)
{
    int count = mx_strlen(s);
    for(int i = 0; i < count/2; i++)
    {
        mx_swap_char(&s[i], &s[count - i - 1]);
    }
}

