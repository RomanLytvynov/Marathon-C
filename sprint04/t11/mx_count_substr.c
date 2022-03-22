char*mx_strstr(const char*s1, const char*s2);

int mx_strlen(const char*s);

int mx_strncmp(const char*s1, const char*s2, int n);

char*mx_strchr(char*s, int c);

int mx_count_substr(const char*str, const char*sub)
{
	int count = 0;
	int j = 0;
	int k;

	if (str == NULL || sub == NULL)
		return -1;
	for (int i = 0; i < mx_strlen(str); i++) {
		if (mx_strchr((char*)str, sub[0])) {
			k = i;
			while (str[k] == sub[j]) {
				if (j == mx_strlen(sub) - 1)
					count++;
				k++;
				j++;
			}
			j = 0;
		}
	}
	return count;
}

