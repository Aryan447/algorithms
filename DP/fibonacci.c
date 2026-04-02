#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int DP[n + 1];

    DP[0] = 0;
    DP[1] = 1;

    for (int i = 2; i <= n; i++) {
        DP[i] = DP[i - 1] + DP[i - 2];
    }

    return DP[n];
}

int main() {
    int n = 10;
    int fibonacci[n];

    for (int i = 0; i < n; i++) {
        fibonacci[i] = fib(i);
        printf("%d ", fibonacci[i]);
    }

    printf("\n");
}

