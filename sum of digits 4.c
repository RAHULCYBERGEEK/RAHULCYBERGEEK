#include<stdio.h>
int main(   )
{
    int index = 0, sum = 0, temp;
    char num[1000];
    printf("DARLING ENTER  A NUMBER: ");
    scanf("%s ", num);
    while(num[index]  != '\0')
    {
         temp = num[index]  - '0';
         sum = sum + temp;
         index ++;

    }
    printf("sum of digits of %s is : %d ",num , sum);
    return 0;
}
