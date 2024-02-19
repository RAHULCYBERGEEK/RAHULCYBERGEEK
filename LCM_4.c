#include<stdio.h>
int getHCF(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;

}
int main()
{
    int num1 = 144, num2 = 32;
    int hcf = getHCF(num1 , num2);
    printf("The HCF : %d \n ", hcf);
    return 0;
}
