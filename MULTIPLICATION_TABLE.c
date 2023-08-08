#include<stdio.h>
int main()
{
   int n;
   printf("ENTER NUMBER : ");
   scanf("%d" , &n);

   for(int i=1;i<=n ; i++)
   {
      printf("%d\n" , (i*n));

   }

   return 0;

}
