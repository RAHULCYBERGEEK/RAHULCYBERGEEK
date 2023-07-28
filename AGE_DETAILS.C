#include<stdio.h>
int main()
{
  int age;
  printf("enter your age");
  scanf("%d",&age);

  switch(age)
  {
    case 3:
          printf("the age is 3");
          break;
    case 13:
           printf("the age is 13 ");
          // break;
    case 23:
            printf("the age is 23");
            break;
    default:
            printf("THE AGE IS NOT 3 , 13, 23");

    return 0;
  }

}
