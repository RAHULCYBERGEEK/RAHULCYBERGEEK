#include<stdio.h>
#include<math.h>
int main()
{
   double base = 29;
   double exp = 5;
   double result ;
   result = pow(base,exp    );
   printf("%lf ^ %lf = %lf\n", base, exp , result);
   printf("%.1Lf ^ %.1Lf = %.2Lf" , base, exp, result);
   return 0;
}
