#include<stdio.h>
#include<math.h>
int getSum(int num)
{
    int sum = 0;
    for(int i = 1; i< sqrt(num); i++)
    {
        if(num % i == 0)
        {
            if( i == 1)
                sum = sum + i;
            else if(i == num/i  )
                sum = sum + i;
            else
                sum = sum + i + num/i;
        }
    }
    return sum;

}
int main()
{
    int num = 180;
    int sum = getSum(num);
    if(sum > num)
    {
        printf("%d is an Abundant number \n ", num);
        printf("num : %d\n Sum : %d \n Abundance : %d , ", num , sum , (sum - num));
    }
    else
        printf("%d is not a Abundant number \n ", num);

}
