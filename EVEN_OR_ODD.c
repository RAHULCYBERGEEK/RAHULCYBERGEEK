#include<stdio.h>
int main(   )
{
    int num, rem;
    printf("\n  enter any number ( 1 to 10) : ");
    scanf("%d ", &num);
    rem = num % 2;
    switch (rem)
    {
    case 0 :
        printf("\n even ");
        break;
    case 1:
        printf("\n odd ");
        break;
    }
}
