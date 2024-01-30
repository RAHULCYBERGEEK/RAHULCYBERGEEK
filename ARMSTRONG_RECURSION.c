#include<stdio.h>
#include<math.h>
int order(int x)
{
    int len = 0;
    while(x)
    {
       len++;
       x = x/10;

    }
    return len;

}
int armstrong(int num, int len)
{
     int sum = 0, temp, digit;
     temp = num;
     while(temp != 0)
     {
        digit = temp % 10;
        sum = sum + pow(digit, len);
        temp /= 10;

     }
     return num == sum;


}
int main()
{
    int num = 234, len;
    len = order(num);
    if(armstrong(num, len))
         printf("%d is armstrong\n ", num);
    else
         printf("%d is not armstrong\n ", num);
    return 0;
}
