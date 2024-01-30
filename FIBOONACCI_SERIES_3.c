#include<stdio.h>
int main()
{
   int a = 0, b = 1;
   int nextterm;
   int n =8;
   if(n == 0 || n == 1)
        printf("fib(%d) : %d", n,n);
        return 0;





for (int i = 2; i<= n; ++i)
{
   nextterm = a+b;
   a = b;
   b = nextterm;

}
printf("fib(%d) : %d", n, nextterm);
return 0;
}
