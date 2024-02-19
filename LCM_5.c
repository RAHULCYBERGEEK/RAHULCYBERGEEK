#include<stdio.h>
int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b , a % b);
}
int main(   )
{
    int num1 = 1500, num2 = 70;

    int hcf = getHCF(num1, num2);
    printf("The HCF : %d \n ", hcf);

    int lcm = (num1 *num2) / hcf;
    printf("The LCM : %d ", lcm);
    return 0;


}
