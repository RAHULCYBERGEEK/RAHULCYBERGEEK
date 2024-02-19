#include<stdio.h>
int getFactorial(int n)
{
    int fact = 1;
    for(int i = 1; i<= n; i++)
          fact = fact * i;
    return fact;
}

int checkStrong(int num)
{
    int digit , sum = 0;
    int temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + getFactorial(digit );
        temp /= 10;
    }
    return sum == num;
}
int main()
{
    int num = 134;
    if(checkStrong(num))
           printf("%d is STRONG NUMBER ", num);
    else
           printf("%d  is NOT A STRONG NUMBER  ", num);
}
