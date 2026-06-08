#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, n;
    double result;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        temp = i;
        n = 0;
        result = 0;

        
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = i;


        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}