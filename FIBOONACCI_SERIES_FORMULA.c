#include<stdio.h>
#include<math.h>
int getfibo(double phi, int n)
{
   for(int i = 0; i<= n; i++)
   {
       printf("%.0lf, ", round(pow(phi,i)/ sqrt(5)));
   }
}
int main()
{
   int n = 15;
   double phi = (1 + sqrt(5)) / 2;
   getfibo(phi , n);
   return 0;
}
