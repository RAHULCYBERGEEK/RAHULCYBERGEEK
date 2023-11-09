// optimizing by skipping even iteration
#include<stdio.h>
#include<math.h>
int isprime(int n )
{
      if(n<= 1)
            return 0;
      else if(n == 2)
             return 1;
      else if(n % 2 == 0)
             return 0;
      for(int i = 3; i<= sqrt(n); i+=2)
      {
          if(n % i == 0)
                 return 0;
      }
      return 1;
}
int main()
{
      int n = 5468;
      if(isprime(n))
               printf("%d is prime ", n);
      else
                printf("%d is not prime ", n);
      return 0;
}
