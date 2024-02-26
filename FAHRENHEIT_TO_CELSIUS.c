#include<stdio.h>
int main()
{
    float fahrenheit , celsius ;
    printf("\n enter the temprature in fahrenheit : ");
    scanf("%f ", &fahrenheit );

    celsius = (0.56 ) * (fahrenheit - 32);
    printf("\n temprature in degrees celsius = %f ", celsius );
    return 0;
}
