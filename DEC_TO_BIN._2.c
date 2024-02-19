#include<stdio.h>
void convert(int num)
{
    int binaryArray[32];
    int i = 0;
    while(num > 0   )
    {
        binaryArray[i] = num %2;
        num = num / 2;
        i++;
    }
    for(int j = i -1; j >= 0; j--)
        printf("%d ", binaryArray[j]);
}
int main(   )
{
    int n = 8787;
    convert(n);
    return 0;
}
