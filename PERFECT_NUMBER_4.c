#include<stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) { // Loop through all divisors, excluding the number itself
        if(num % i == 0) {
            sum = sum + i;
        }
    }
    printf("Number: %d, Sum of divisors: %d\n", num, sum); // Print the number and sum of divisors
    if(sum == num) { // Check if the sum of divisors equals the number itself
        return 1; // If yes, return 1 indicating the number is perfect
    }
    return 0; // Otherwise, return 0 indicating the number is not perfect
}

int main() {
    int num = 6;
    if(isPerfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    return 0;
}
