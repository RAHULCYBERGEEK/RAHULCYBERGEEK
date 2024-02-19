#include<stdio.h>
int getFactorial(int num)
{
    if(num == 0 )
          return 1;
    return num * getFactorial(num-1);
}
int checkStrong(int num)
{
    int digit , sum = 0;
    int temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + getFactorial(digit);
        temp /= 10;
    }
    return sum == num;
}
int main()
{
    int num = 145;
    if(checkStrong(num) )
          printf("%d is STRONG NUMBER  ", num);
    else
          printf("%d is NOT STRONG NUMBER  ", num);

}
