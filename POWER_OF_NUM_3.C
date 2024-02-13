#include<stdio.h>
int main()
{
   double base = 423.3;
   int exp = -5;
   double result = 1.0;
   while(exp > 0)
   {
      result *= base;
      --exp;
   }
   while(exp<0)
   {
      result /= base;
      ++exp;
   }
   printf("answer = %Lf", result);
   return 0;
}
