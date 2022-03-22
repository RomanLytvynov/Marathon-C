#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

int mx_count(int n)
{
	int cnt = 0;
    if (n/10==0)
      return 1;
   else
     {
        while (n>0) 
         {
         	n=n/10;
         	cnt+=1;
         }
         return cnt;
     }     
 
}

bool mx_is_narcissistic(int num)
{
	if(num<=0) return false;
	int temp = num;
	int num_cnt = mx_count(num);
	int sum = 0;
	for (int i = 0; i < num_cnt; ++i)
	{
		sum += mx_pow(num%10, num_cnt);
		num /= 10;
	}
	if(sum == temp) return true;
	else return false;
}

