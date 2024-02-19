#include<stdio.h>
#include<math.h>

int convert(long long num)
{
    int decimal = 0, i = 0;
    while(num != 0)
    {
        int digit = num % 10;
        decimal += digit * pow(2, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    long long binary;
    printf("Enter binary number: ");
    scanf("%lld", &binary);

    // Reverse the binary number to read it from right to left
    long long reversedBinary = 0;
    long long temp = binary;
    while (temp != 0) {
        reversedBinary = reversedBinary * 10 + temp % 10;
        temp /= 10;
    }

    printf("Decimal equivalent: %d\n", convert(reversedBinary));

    return 0;
}
