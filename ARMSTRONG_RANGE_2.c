#include<stdio.h>
#include<math.h>
int order (int x)
{
    int len = 0;
    while(x);
    {
       len++;
       x = x/10;

    }
    return len;

}
int getarmstrongsum(int num, int order)
{
   if(num == 0)
       return 0;
   int digit = num % 10;
   return pow(digit, order) + getarmstrongsum(num/10, order);

}
void armstrong(int low,int high)
{
    for(int num = low; num<= high; num++)
    {
      int sum = 0, temp , digit , len;
      temp = num;
      len = order(num);
      if(num == getarmstrongsum(num, len))
           printf("%d ", num);
    }
}
int main()
{
   int low, high;
   printf("enter a lower & upper bounds: ");
   scanf("%d %d ", &low, &high);
   armstrong(low, high);
}
