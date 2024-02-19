#include<stdio.h>
int checkHarshad(int num)
{
    int sum = 0;
    int temp = num;
    while(temp != 0)
    {
        sum = sum + temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}
int main(   )
{
    int num = 135;
    if(checkHarshad(num))
        printf("%d is a  Harshad number ", num);
    else
        printf("%d is not a Harshad number " , num );
    return 0;
}
