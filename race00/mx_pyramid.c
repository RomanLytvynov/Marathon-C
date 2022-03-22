#include <unistd.h>

void mx_printchar(char c);

void mx_print_first(int n)
{
	for (int i = 0; i < n; ++i)
		{
			if(i<n-1)
				mx_printchar(' ');
			else
			{
				mx_printchar('/');
				mx_printchar('\\');
				mx_printchar('\n');
				break;
			}
		}
}

void mx_print_last(int n)
{
	mx_printchar('/');
	for (int i = 0; i < n*2 - 3; ++i)
	{
		mx_printchar('_');
	}
	mx_printchar('\\');
	mx_printchar('|');
	mx_printchar('\n');
}

void mx_pyramid(int n)
{
	if(n<=1 || n%2!=0) return;
	else if(n==2)
	{
		mx_print_first(n);
		mx_printchar('/');
		mx_printchar('_');
		mx_printchar('\\');
		mx_printchar('|');
		mx_printchar('\n');

	}
	else
	{
		mx_print_first(n);
		int count = 2;
		int count_for_sp_ins1 = 0;
		int count_for_sp_ins2 = 2;
		for (int i = 0; i < n/2 - 1; ++i)
		{
			for (int i = 0; i < n - count; ++i)
			{
				mx_printchar(' ');
			}
			count++;
			mx_printchar('/');
			for (int i = 0; i < count_for_sp_ins2/2 + count_for_sp_ins1; ++i)
			{
				mx_printchar(' ');
			}
			mx_printchar('\\');
			for (int i = 0; i < count_for_sp_ins2/2; ++i)
			{
				mx_printchar(' ');
			}
			mx_printchar('\\');
			count_for_sp_ins1++;
			count_for_sp_ins2+=2;
			mx_printchar('\n');
		}
		int cfspi2 = (count_for_sp_ins2/2) - 1;
		for (int i = 0; i < n/2 - 1; ++i)
		{
			for (int i = 0; i < n - count; ++i)
			{
				mx_printchar(' ');
			}
			count++;
			mx_printchar('/');
			for (int i = 0; i < count_for_sp_ins2/2 + count_for_sp_ins1; ++i)
			{
				mx_printchar(' ');
			}
			mx_printchar('\\');
			for (int i = 0; i < cfspi2; ++i)
			{
				mx_printchar(' ');
			}
			mx_printchar('|');
			count_for_sp_ins2+=2;
			count_for_sp_ins1++;
			cfspi2--;
			mx_printchar('\n');
			if(i==n/2 - 2)
			{
				mx_print_last(n);
			}
		}
	}
}
