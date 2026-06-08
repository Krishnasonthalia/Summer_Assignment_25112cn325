#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);

    while (n > 0) {
        if (n % 2 == 1)
            result *= x;

        x *= x;
        n /= 2;
    }

    printf("Result = %lld\n", result);

    return 0;
}