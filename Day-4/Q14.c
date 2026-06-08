#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Nth Fibonacci term = %d\n", a);
    } 
    else if (n == 2) {
        printf("Nth Fibonacci term = %d\n", b);
    } 
    else {
        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth Fibonacci term = %d\n", b);
    }

    return 0;
}