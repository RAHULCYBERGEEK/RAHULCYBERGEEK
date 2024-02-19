#include<stdio.h>
static int sum = 0;
int getSumDivisors(long num, int i)
{
    if(i <= num/2)
    {
        if(num % i == 0)
            sum = sum +i;
        i++;
        getSumDivisors(num , i);
    }
    return sum;
}
int main(   )
{
    int num = 28;
    if(getSumDivisors(num, 1) == num)
        printf("%d is a perfect number ", num);
    else
        printf("%d is not a perfect number ", num);
    return 0;
}
