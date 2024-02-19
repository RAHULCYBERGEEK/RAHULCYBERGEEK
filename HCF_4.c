#include<stdio.h>
int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF ( b, a%b);

}
int main()
{
    int num1 = 544, num2 = 96, hcf = 1;
    hcf = getHCF(num1 , num2);
    printf("THE HCF : %d ", hcf);
    return 0;
}
