#include<stdio.h>
int checkAutomerphic(int num)
{
    int square = num * num;
    while(num!= 0)
    {
        if(num % 10 != square % 10)
        {
            return 0;
        }
        num /= 10;
        square /= 10;
    }
    return 1;
}
int main()
{
    int num = 376, square = num * num;
    if(checkAutomerphic(num))
        printf("num : %d,  Square: %d - Automerphic number ", num , square);
    else
        printf("num : %d , Square: %d - not Automerphic number ", num, square);
}
