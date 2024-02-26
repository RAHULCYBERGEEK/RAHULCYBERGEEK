#include<stdio.h>
#include<math.h>
int main()
{
    int a, b ,c;
    float D, deno , root1, root2;
    printf("\n enter  the values of a , b, and c: ");
    scanf("%d %d %d ", &a , &b ,&c);
    D = (b*b) - (4 *a * c);
    deno = 2 *a;
    if(D > 0)
    {
        printf("\n real roots");
        root1 = (-b + sqrt(D) ) / deno;
        root2 = (-b - sqrt(D)) / deno;
        printf("\n root1 = %f \t root2 = %f", root1, root2);
    }
    else if(D == 0)
    {
        printf("\n equal roots");
        root1 = -b / deno;
        printf("\n root1 = %f \t root2 = %f", root1, root2);

    }
    else
        printf("\n imaginary roots");
    return 0;
}
