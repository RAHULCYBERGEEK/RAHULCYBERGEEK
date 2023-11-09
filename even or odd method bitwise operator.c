#include<stdio.h>
int isEven(int num)
{
    return(~(num&1));

}

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num );
    isEven(num)? printf("EVEN"):printf("ODD");
    return 0;

}
