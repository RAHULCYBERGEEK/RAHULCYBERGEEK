#include<stdio.h>
int main()
{
   int age ,marks ;
   printf("enter your age");
   scanf("%d", &age );

   switch(age)
   {
      case 3:
             printf("enter your marks");
             scanf("%d", &marks);

              printf("the age is 3\n");
              switch(marks)
              {
                case 45:
                       printf("your marks are 45");
                       break;

                default:
                       printf("your marks are not 45");


            }
            break;

      case 13:
             printf("the age is 13");
             break;
      case 23:
             printf("the age is 23");
             break;
      default:
             printf("invalid choice");

   }
   return 0;
}
