#include<stdio.h>
int main()
{
    int num = 35;
    int sum = 0;
    for(int i = 1; i< num; i++)
    {
        if(num % i == 0)
            sum = sum +i;
    }
    if(sum == num   )
        printf("%d is a perfect number ", num);
    else
        printf("%d is not a perfect number  ", num);
    return 0;
}