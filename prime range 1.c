//range of prime numbers
#include<stdio.h>
int checkprime(int num)
{
    if(num < 2)
        return 0;
    else
         {
             int x = num/ 2;
             for(int i = 2; i< x ; i++)
             {
                 if(num % i == 0)
                        return 0;

             }
         }

         return 1;
}
int main()
{
     int a = 10 , b = 20;
     for(int i = a; i<= b; i++)
       {
           if(checkprime(i))
                 printf("%d ",i );

       }
       return 0;
}
