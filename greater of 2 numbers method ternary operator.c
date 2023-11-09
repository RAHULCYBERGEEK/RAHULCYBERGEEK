// using ternary operator

#include <stdio.h>
int main()
{
    int a , b, temp;
    a = 20,b=30;
    if(a == b)
    {
       printf("both are equal");

    }

    else
          {
             temp = a > b ? a : b;
             printf("%d is largest ", temp);


          }

          return 0;

}
