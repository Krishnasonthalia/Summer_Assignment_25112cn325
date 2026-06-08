#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num & 1;  // Check if the last bit is 1
        num >>= 1;         // Right shift by 1
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}