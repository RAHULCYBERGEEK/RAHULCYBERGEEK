#include<stdio.h>
#include<math.h>

int convert(long long num)
{
    int i = 0, decimal = 0;
    while(num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(8, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    long long octal;
    printf("Enter octal number: ");
    scanf("%lld", &octal);

    printf("Decimal: %d", convert(octal));

    return 0;
}
