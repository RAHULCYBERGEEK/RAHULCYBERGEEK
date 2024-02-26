#include<stdio.h>
int main()
{
    int num1, num2, temp;
    printf("\n enter the first number : ");
    scanf("%d ", &num1);

    printf("\n enter the second number : ");
    scanf("%d ", &num2);

    temp = num1;
    num1= num2;
    num2 = temp;

    printf("\n the first number is %d ", num1);
    printf("\n the second number is %d ", num2);
    return 0;
}
