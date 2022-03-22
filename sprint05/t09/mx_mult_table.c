int mx_atoi(const char*str);

void mx_printchar(char c);

void mx_printint(int n);

int main(int argc, char const *argv[])
{
	argc++;
	argc--;
	if((mx_atoi(argv[1]) < 0 || mx_atoi(argv[1]) >9)
		|| (mx_atoi(argv[2]) < 0 || mx_atoi(argv[2]) >9))
		return 0;
	if(mx_atoi(argv[1]) > mx_atoi(argv[2]))
	{
		int multiplier = mx_atoi(argv[2]);
		int range = mx_atoi(argv[1]);

		for (int i = multiplier; i <= range; ++i)
		{
			for (int j = multiplier; j <= range; ++j)
			{
				if (j==range)
				{
					mx_printint(i*j);
					break;
				}
				mx_printint(i*j);
				mx_printchar('\t');
			}
			mx_printchar('\n');
		}
	}

	else if(mx_atoi(argv[1]) == mx_atoi(argv[2]))
	{
		mx_printint(mx_atoi(argv[1]) * mx_atoi(argv[2]));
		mx_printchar('\n');
	}

	else
	{
		int from = mx_atoi(argv[1]);
		int to = mx_atoi(argv[2]);

		for (int i = from; i <= to; ++i)
		{
			for (int j = from; j <= to; ++j)
			{
				if (j==to)
				{
					mx_printint(i*j);
					break;
				}
				mx_printint(i*j);
				mx_printchar('\t');
			}
				mx_printchar('\n');
		}
	}
	return 0;
}

