// optimization by break condition
#include<stdio.h>
int main( )
{
    int i, num = 12;
    int isprime = 1;

    if(num < 2)
    {
        isprime = 0;
    }

    else
    {
        for(i = 2; i<= (num-1); i++)
        {

              if(num % i == 0)
              {
                   isprime = 0;
                   break;
              }



        }
    }

    if(isprime)
          printf("%d is prime ", num);

    else
          printf("%d is not prime ", num);

    return 0;

}
