#include<stdio.h>
#include<math.h>
void printfact(int n)
{
   for(int i =1 ; i<= sqrt(n); ++i)
   {
      if(n%i == 0)
      {
         if(i == n/i)
             printf("%d , ",i);
         else
              printf("%d , %d, ",  i, n/i);

      }
   }
}
int main()
{
    int n = 80702000;
    printf("\n ", n);
    printfact(n);
    printf("\n ", n);
}
