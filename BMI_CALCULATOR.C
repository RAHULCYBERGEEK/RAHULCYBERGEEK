#include<stdio.h>
int main()
{
   double weight , height, bmi;
   printf("enter your weight in kilograms: ");
   scanf("%lf", &weight);

   printf("enter your height in meters: ");
   scanf("%lf", &height);

   bmi= weight/(height * height);

   printf("your BMI is : \n" , bmi);

   if(bmi<18.5)
   {
     printf("you are underweight. \n");

   }

   elseif(bmi>=18.5 && bmi<24.9)
   {
      printf{"you are within a healthy weight range. \n"};
   }

   elseif(bmi>=25.0 && bmi< 29.9)
   {
      printf("you are overweight. \n ");
   }

   else
   {
      printf("you are obese. \n");
   }

   return 0;
}
