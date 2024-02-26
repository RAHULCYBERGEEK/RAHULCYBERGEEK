#include<stdio.h>
int main(   )
{
    float radius ;
    double area , circumference;
    printf(" enter the radius of the circle :");
    scanf("%f ", &radius);

    area = 3.14 * radius * radius ;
    circumference = 2 * 3.14 * radius;
    printf("Area = %.21e ", area);
    printf("\n circumference = %.2e" , circumference);
    return 0;
}
