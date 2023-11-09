#include<stdio.h>
int getsum(int sum,int i,int b )
{
    if(i>b)
         return sum;
    return i + getsum(sum,i+1,b);

}

int main()
{
    int a=5 , b=10;
    int sum = getsum(0, a, b);
    printf("sum of numbers in the given range is %d", sum);
    return 0;
}
