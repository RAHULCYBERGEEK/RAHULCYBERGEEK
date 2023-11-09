#include<stdio.h>
#include<string.h>
int getsum(char str[], int len)
{
   int sum = 0;
   for(int i = 0; i < len; i++)
   {
       sum = sum + str[i] - 48;
   }
   return sum;
}
int main(   )
{
    char num[] = "345678909890764   ";
    int len = strlen(num);
    printf("sum: %d ", getsum(num , len));
    return 0;
}
