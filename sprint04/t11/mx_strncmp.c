#include <stdio.h>

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

int mx_strncmp(const char*s1, const char*s2, int n)
{
	int counter = 0;
	int l1 = mx_length(s1);
	int l2 = mx_length(s2);
	int max = l1 >= l2 ? l2 : l1;
	int val1 = mx_count_literals(s1, max);
	int val2 = mx_count_literals(s2, max);

	if((l1==l2)&&(l1 <= n))
	{
		for (int i = 0; i < max; ++i)
		{
			if(*(s1+i) == *(s2+i)) counter++;
			else 
			{
				break;
			}
		}
		if(counter==max)return 0;
		else
		{
			return val1 >= val2 ? 1 : -1;
		}
	}
	else
	{
		for (int i = 0; i < max; ++i)
		{
			if(*(s1+i) == *(s2+i)) counter++;
			else 
			{
				break;
			}
		}
		if(counter==max)return 0;
		else
		{
			return val1 >= val2 ? 1 : -1;
		}
	}
}

