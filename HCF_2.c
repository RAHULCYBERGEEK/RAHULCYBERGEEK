#include<stdio.h>
int main(   )
{
    int num1 = 144, num2 = 32, hcf = 1;
    while(num1 != num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    printf("the hcf : %d ", num1);
    return 0;
}
