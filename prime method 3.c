#include<stdio.h>
int main()
{
    int i, num = 1736;
    int isprime = 1;
    if(num < 2)
        isprime = 0;

    else
    {
        int x = num/2;
        for(i = 2; i<x; i++)
        {
            if(num % i == 0)
            {
                isprime  = 0;
                break;
            }
        }

    }

    if(isprime)
    {
        printf("%d is prime ", num);

    }
    else
     {
         printf("%d is not prime ", num);
     }

     return 0;
}
