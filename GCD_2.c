#include<stdio.h>
int main(   )
{
    int n1 = 104, n2 = 24,gcd =1;
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;

    }
    printf("The GCD : %d ,", n1, n2, gcd);
    return 0;
}
