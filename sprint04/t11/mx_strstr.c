#include <stdio.h>

int mx_strlen(const char*s);

int mx_strncmp(const char*s1, const char*s2, int n);

char*mx_strchr(char*s, int c);

char*mx_strstr(const char*s1, const char*s2)
{
	int j = 0;
	int k;

	for (int i = 0; i < mx_strlen(s1); i++) {
		if (mx_strchr((char*)s1, s2[0])) {
			k = i;
			while (s1[k] == s2[j]) {
				if (j == mx_strlen(s2) - 1)
					return (char *)&s1[i];
				k++;
				j++;
			}
			j = 0;
		}
	}
	return 0;
}

