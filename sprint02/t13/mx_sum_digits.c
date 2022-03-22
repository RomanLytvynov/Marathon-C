#include <stdio.h>

int mx_sum_digits(int num)
{
  int sum = 0;
    if (num/10==0) return num;
    else
    {
      if(num<0) num*=-1;
      while (num>0) 
      {
        sum+=num%10;
        num=num/10;
      }
      return sum;
    }     
}

