#include<stdio.h>
int main()
{

    int num1 = 10, num2 = 5, lcm;

    int max = (num1 > num2) ? num1 : num2;

    for(int i = max ; i<= num1 *num2; i = i + max);
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf(" THE LCM : %d ", lcm);
    return 0;
}
