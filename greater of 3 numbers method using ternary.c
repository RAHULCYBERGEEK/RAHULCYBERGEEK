// using ternary operator

#include<stdio.h>
int main()
{
    int a , b, c;
    printf("enter the three numbers darling  ");
    scanf("%d %d %d", &a,&b,&c);
    int temp, result;
    temp = a>b ? a:b;
    result = temp>c ? temp:c;
    printf("%d is the largest ", result);
    return 0;
}
