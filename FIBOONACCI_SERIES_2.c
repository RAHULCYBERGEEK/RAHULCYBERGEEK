#include<stdio.h>
int printfib(int n  )
{
   static int a = 0, b=1, nextterm;
   if(n>0)
   {
      nextterm = a+b;
      a = b;
      b= nextterm;
      printf("%d, ", nextterm);
      printfib(n-1);
   }
}
int main()
{
   int n = 10;
   printf("0, 1, ");
   printfib(n-2);
   return 0;

}
