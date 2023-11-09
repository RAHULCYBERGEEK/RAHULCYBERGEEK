// prime number method 1

#include <stdio.h>
int main()
{
    int i, count = 0;
    int num = 20;
    for( i =1; i <=20;i++)
    {
       if(num %i ==0)
          count ++;

       else if (count > 2)
           printf("%d is not a prime number ", num);
       else
            printf("%d is a prime number ",num);
    }
       return 0;

}
