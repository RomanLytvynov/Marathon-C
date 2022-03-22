#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s)
{
    int counter = 0;
    for(int i = 0; i < *(s + i); i++) counter++;
    return counter;
}

int mx_count_literals(const char*s, int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if((int)s[i] > 48 && (int)s[i] < 57) continue;
		count+=(int)(s[i]);
	}
	return count;
}

int mx_strcmp(const char*s1, const char*s2)
{
    int count = 0;
    int val1 = mx_count_literals(s1, mx_strlen(s1));
	int val2 = mx_count_literals(s2, mx_strlen(s2));

    if(mx_strlen(s1) == mx_strlen(s2))
    {
        int size = mx_strlen(s1);
        for(int i = 0; i < count; i++)
        {
            if(s1[i] == s2[i]) count++;
            else break;
        }
        if(count == size)
        {
            return 0;
        }
        else
        {
           return val1 > val2? 1 : -1;
        }
    }
    else if(mx_strlen(s1) < mx_strlen(s2))
    {
        return val1 <= mx_count_literals(s2, mx_strlen(s1))? -1 : 1;
    }
    else
    {
        return mx_count_literals(s1, mx_strlen(s2)) >= val2? 1 : -1;
    }
}

int main()
{
    printf("%d\n", strcmp("wsefewf  wlkk    ;breakwek   kwfkwekKKWEKF", "W;KFWEJFQWOFJQWkcsdkcscls;s"));
    printf("%d\n", mx_strcmp("wsefewf  wlkk    ;breakwek   kwfkwekKKWEKF", "W;KFWEJFQWOFJQWkcsdkcscls;s"));
    return 0;
}

