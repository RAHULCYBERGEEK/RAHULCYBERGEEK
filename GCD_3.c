#include<stdio.h>
int calGCD(int n1 , int n2)
{
    if(n1 == 0)
        return n2;
    if(n2 == 0)
        return  n1;
    if(n1 == n2)
        return n1;
    if(n1 > n2)
        return calGCD(n1 - n2, n2);

    return calGCD(n1 , n2 - n1);

}
int main()
{
    int n1 = 45, n2 = 80;
    int gcd = calGCD(n1, n2);
    printf("The GCD of %d and %d is : %d ", n1, n2, gcd);
    return 0;
}
