#include<stdio.h>
int main()
{
    int year;
    printf("\n enter any year : ");
    scanf("%d ", &year);
    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
         printf("\n leap year ");
    else
        printf("\n not a leap year");
    return 0;
}
