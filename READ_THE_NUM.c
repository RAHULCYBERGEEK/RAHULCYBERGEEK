#include<stdio.h>
int main ()
{
    int num;
    int negative = 0, positive = 0, zeroes = 0;
    printf("\n enter -1 to exit  ...");
    printf("\n\n enter any numbers ");
    scanf("%d ", &num);
    while(num != -1)
    {
        if(num > 0  )
            positive++;
        else if(num < 0)
            negative++;
        else
            zeroes++;
        printf("\n \n enter any number : ");
        scanf("%d ", &num);
    }
    printf("\n count of positive numbers entered = %d ", positive );
    printf("\n count of negative numbers entered = %d ", negative);
    printf("\n count of zeroes entered = %d ", zeroes);
    return 0;
}
