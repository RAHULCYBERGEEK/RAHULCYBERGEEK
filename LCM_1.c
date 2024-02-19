#include<stdio.h>
int main()
{
    int num1 = 36, num2 = 54, lcm;
    int max = (num1 > num2  )? num1 : num2;
    for(int i = max; i<= num1 * num2; i++)
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            if(i % num1 == 0 && i % num2 == 0)
            {
                lcm = i;
                break;
            }

        }
    }
    printf("The LCM : %d ", lcm);
    return 0;
}

