#include<stdio.h>
int main()
{
   double base = 2.32;
   int exp = 2;
   double result = 1.0;
   while(exp !=0)
   {
       result *= base;
       --exp;
   }
   printf("answer = %Lf" , result);
   return 0;
}
