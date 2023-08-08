#include<stdio.h>
int main()
{
  int n;
  printf("ENTER NUMBER : ");
  scanf("%d",&n);

  int sum =0;
  for(int  j=n;   j>=1;  j--)
  {
     sum = sum +j;
     printf("%d\n", j);
  }

  printf("SUM IS %d \n", sum);

  return 0;
}
