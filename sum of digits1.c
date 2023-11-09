// sum of digits of a number
#include<stdio.h>
int main()
{
   int num, sum = 0;
   printf("enter the number darling \n ");
   scanf("%d ", num);

   while(num !=  0)
   {
       sum += num % 10;
       num = num / 10;
   }
   printf("sum : %d \n ", sum);
   return 0;
}
