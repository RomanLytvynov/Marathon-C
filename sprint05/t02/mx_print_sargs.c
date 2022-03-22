void mx_printchar(char c);

void mx_printstr(const char*s);

int mx_strcmp(const char*s1, const char*s2);

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc - 1; ++i)
	{
		for (int j = 1; j < argc - 1; ++j)
		{
			if(mx_strcmp(argv[j], argv[j+1]) > 0)
			{
				char *s = argv[j];
				argv[j] = argv[j+1];
				argv[j+1] = s;
			}
		}
	}

	for (int i = 1; i < argc; ++i)
	{
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}

	return 0;
}

