#include<stdio.h>
#include<math.h>
int checkprime(int n)
{
    if(n<=1)
         return 0;
    if(n == 2)
          return 1;
    if(n %2 == 0)
           return 0;
    for(int i = 3; i<= sqrt(n); i+= 2)
      {
          if(n % i == 0)
                return 0;
      }
      return 1;
}
int main()
{
     int a, b;
     a = 200 , b = 500;
     for(int i = a; i<= b;i++)
      {
          if(checkprime(i))
                       printf("%d ",i);
      }
      return 0;

}
