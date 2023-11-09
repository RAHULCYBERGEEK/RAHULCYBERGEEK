// recursion technique for prime num
#include<stdio.h>
int checkprime(int n, int i)
{
    if(n < 2)
         return 0;
    if(i == n)
          return 1;
    if(n % i == 0)
           return 0 ;
    i ++;
    return checkprime(n,i);

}
int main()
{
    int i = 2;
    int n = 97;
    if(checkprime(n , i))
             printf("%d is prime ", n);
    else
            printf("%d is not prime ", n);
    return 0;
}
