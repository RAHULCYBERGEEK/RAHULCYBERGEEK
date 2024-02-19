#include<stdio.h>
int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b , a % b);

}
int main(   )
{
    int num1 = -144 , num2 = 32, hcf = 1;
    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;

    hcf = getHCF(num1 , num2);
    printf("the HCF :  %d ", hcf);
    return 0;
}
