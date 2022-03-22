int mx_strcmp(const char*s1, const char*s2);

int mx_linear_search(char**arr, const char*s)
{
	for (int i = 0; arr[i] != NULL; ++i)
	{
		if(!mx_strcmp(s, arr[i])) return i;
	}

	return -1;
}

