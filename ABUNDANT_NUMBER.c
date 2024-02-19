#include<stdio.h>
int main(   )
{
    int num = 104, sum = 0;
    for(int i = 1; i< num; i++)
    {
        if(num % i == 0)
            sum = sum +i;
    }
    if(sum > num)
    {
        printf("%d is an Abundant number \n ", num);
        printf("num : %d\n sum: %d\n Abundance : %d ", num, sum, (sum - num ));


    }
    else
        printf("%d is not a Abundant number ", num);
}
