#include<stdio.h>
#include<math.h>
int main()
{
    int num = 28, sum = 0;
    for(int i = 1; i< sqrt(num); i++)
    {
        if(num % i == 0)
        {
            if(i == 1)
                sum = sum +i;
            else if(i == num/i)
                sum = sum + i;
            else
                sum = sum + i + num/i;
        }
    }
    if(sum == num)
        printf("%d is a perfect number ", num);
    else
        printf("%d is not a perfect number ", num);
}
