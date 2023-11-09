#include<stdio.h>
int main( )
{
   int a=55,b=109;
   int sum=0;
   for(int i=a;i<=b;i++)
            sum=sum+i;
   printf("sum of numbers in the given range is %d",sum);
   return 0;
}
