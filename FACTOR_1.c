#include<stdio.h>
int main()
{
   int n = 8787;
   printf("factors of %d are : \n",n);
   for(int i=1;i<=n;i++)
    {
       if( n % i==0)
            printf("%d ,",i);
    }
}
