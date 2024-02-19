#include<stdio.h>
int main()
{
    int  num1 = 16, num2 = 24, hcf = 1;

    for(int i = 1; i<= num1 || i<= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    int lcm = (num1 * num2)/ hcf;
    printf("THE LCM : %d ", lcm);
    return 0;
}
