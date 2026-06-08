#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Finding GCD using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    // LCM formula: (a * b) / GCD
    lcm = (x * y) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}