#include<stdio.h>
#include<math.h>
int checkprime(int num)
{
    if(num < 2)
          return 0;
    else
      {
          for(int i = 2; i< sqrt(num); i++)
          {
              if(num % i == 0)
                      return  0;

          }
      }
      return 1;
}
int main()
{
    int a , b;
    a = 500, b = 2000;
    for(int i = a; i <= b; i++)
      {
          if(checkprime(i))
              printf("%d ", i);
       }
       return 0;
}
