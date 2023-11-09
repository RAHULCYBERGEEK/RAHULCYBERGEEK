#include<stdio.h>
int getSum(int sum,int n)
{
     if(n==0)
        return sum;

     return n+getSum(sum,n-1);

}
// here comes the driver code
int main()
{
    int n, sum=0;
    printf("enter the number darling \n");
    scanf("%d ",&n);
    printf("%d", getSum(sum,n   ));
    return 0;
}
