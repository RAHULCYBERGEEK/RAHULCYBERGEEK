#include<stdio.h>
#include<math.h>
int order (int x)
{
   int len = 0;
   while(x)
   {
      len++;
      x/=10;

   }
   return len;
}
int getarmstrongsum(int num, int order  )
{
   if(num == 0)
    return 0;
    int digit = num % 10;
    return pow(digit, order) + getarmstrongsum(num/10, order);

}
int main (  )
{
   int num, len;
   num = 596345;
   printf("the number is : %d\n", num   );
   len = order(num);
   if(num == getarmstrongsum(num,len ))
        printf("%d is armstrong ",num);
   else
        printf("%d is not a armstrong ", num);
}
