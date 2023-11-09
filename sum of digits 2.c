#include<stdio.h>
int getsum(int num, int sum)
{
     if(num == 0)
             return sum;
     sum += num % 10;
     return getsum(num / 10 , sum);

}
int main()
{
    int num, sum = 0;
    num = 456;
    printf("the number is: %d \n ", num);
    printf("sum: %d \n ", getsum(num, sum));
    return 0;
}
