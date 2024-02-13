#include<stdio.h>
#include<math.h>
void printfact(int n)
{
    int i;
    int flag = 0;
    for(i = 1; i<= sqrt(n); i++)
    {
        if(n % i == 0)
              printf("%d, ", i);
        if(i == n/i)
             flag = 1;
    }

    if(flag)
        i -= 2;
    for(; i>= 1; i--)
    {
        if(n % i == 0)
            printf("%d, ", n/i);
    }
}
int main()
{
   int n = 8787;
   printf("\n ", n);
   printfact( n);
   printf("\n",n);
}
