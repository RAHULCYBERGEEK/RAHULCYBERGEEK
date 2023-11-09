// greatest of two numbers
#include<stdio.h>
int main()
{
    int a ,b;
    a = 10,b=23;

    if(a==b)
        printf("both are equal");
    else if(a<b)
        printf("%d is greater",b);

    else
        printf("%d is greater", a);

    return 0;


}
