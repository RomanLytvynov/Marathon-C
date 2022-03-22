void mx_printint(int n);

int mx_atoi(const char*str);

void mx_printchar(char c);

int main(int argc, char const *argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		int n = mx_atoi(argv[i]);
		int k;
		for (int j = 31; j >=0; --j)
		{
			k = n >> j;
			if(k & 1)
				mx_printint(1);
			else
				mx_printint(0);
		}
		mx_printchar('\n');
	}

	return 0;
}

