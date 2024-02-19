#include<stdio.h>
int main(   )
{
    int num1 = 369, num2 = 620, hcf = 1;
    for(int i = 1; i<= num1 || i<= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0   )
            hcf = i;
    }
    printf("THE HCF : %d ", hcf);
    return 0;
}
