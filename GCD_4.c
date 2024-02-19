#include<stdio.h>
int calGCD(int a, int b )
{
    return b == 0 ? a : calGCD(b , a% b);

}
int main()
{
    int n1 = 45, n2 = 18;
    int gcd = calGCD(n1 , n2);
    printf("The GCD of %d and %d is : %d ", n1 , n2 ,gcd);
    return 0;
}
