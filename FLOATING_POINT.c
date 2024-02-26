#include<stdio.h>
int main()
{
   float number;
   int rightmost_digit;
   printf("enter a floating point number : ");
   scanf("%f ", &number);
   int integral_part = (int ) floor(number);
   rightmost_digit = integral_part % 10;
   printf("rightmost digit of the integral part : %d\n ", rightmost_digit);
   return 0;
}
