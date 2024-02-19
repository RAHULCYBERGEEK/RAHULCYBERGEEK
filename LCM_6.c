#include<stdio.h>
int getHCF(int num1 , int num2)
{
    if(num1 == 0)
        return num2;
    if(num2 == 0)
        return num1;
    if(num1 == num2)
        return num2;
    if(num1 > num2)
        return getHCF(num1 - num2 , num2);
    return getHCF(num1 , num2 - num1);
}
int main()
{
    int num1 = 144, num2 = 32;
    int hcf = getHCF(num1 , num2);
    printf("THE HCF : %d \n ", hcf);

    int lcm = (num1 * num2 )/ hcf;
    printf("The LCM : %d ", lcm);
    return 0;

}
