#include<stdio.h>
double power (double base, int exp);
int main()
{
    double base = .25;
    int exp = -4;
    double result = 1.0;
    result = power( base, exp);
    printf("%Lf ^ %d = %Lf", base,exp, result);
    return 0;
}
double power(double base, int exp)
{
    if(exp > 0)
         return (power(base , exp -1)*base);
     else if(exp < 0)
           return (power(base,exp+1)/base);
     else
            return 1;
}
