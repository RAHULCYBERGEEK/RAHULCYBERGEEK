#include <stdio.h>

int main() {
    char hex[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    int decimal = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        decimal = decimal * 16 + ((hex[i] >= '0' && hex[i] <= '9') ? (hex[i] - '0') : (toupper(hex[i]) - 'A' + 10));
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
