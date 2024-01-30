#include<stdio.h>

// Function to calculate Fibonacci number using memoization
int fibo(int n, int memo[]) {
    if (n == 0 || n == 1)
        return n;

    // Check if the result is already computed
    if (memo[n] != -1)
        return memo[n];

    // If not computed, calculate and store in memo
    memo[n] = fibo(n - 1, memo) + fibo(n - 2, memo);

    return memo[n];
}

int main() {
    int n = 5;

    // Initialize memoization array with -1
    int memo[6]; // Assuming n can be up to 5
    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    int fibonacci = fibo(n, memo);
    printf("fib(%d) : %d\n", n, fibonacci);

    return 0;
}
