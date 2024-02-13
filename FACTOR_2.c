#include<stdio.h>
int main()
{
   int num = 8787;
   printf("factors of %d are : \n", num);
   for(int i =1 ; i<= num/2;i++)
   {
      if(num %i ==0)
            printf("%d, ", i);
   }
   printf("%d ", num);
   return 0;
}
