#include<stdio.h>
#include<math.h>

int order(int x)
{
   int len = 0;
   while(x)
   {
      len++;
      x/= 10;

   }
   return len;
}
void armstrong(int low , int high)
{
    for(int num = low ; num<= high ; num++)
    {
       int sum = 0, temp, digit, len;
       temp = num;
       len = order(num);
       while(temp != 0)
       {
          digit = temp % 10;
          sum += pow(digit, len);
          temp /= 10;
       }
       if(sum == num)
           printf("%d ", num);

    }
}
int main()
{
    int low , high;
    printf("enter a lower & upper bounds: ");
    scanf("%d %d", &low, &high);
    armstrong(low, high);
}
