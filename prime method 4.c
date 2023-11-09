// optimization by sqrt of num
#include<stdio.h>
#include<math.h>
int main()
{
    int i, num = 64;
    int isprime = 1;
    if(num < 2)
          isprime = 0;
    else
        {
             for(i = 2; i<= sqrt(num); i++)
             {
                  if(num % i == 0)
                             isprime = 0;
                              break;
             }
        }

        if(isprime)
                 printf("%d is prime ", num);
        else
                printf("%d is not prime darling ", num);
        return 0;
}
