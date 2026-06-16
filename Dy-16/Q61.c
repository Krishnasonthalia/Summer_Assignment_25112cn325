#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;          
    int size = 5;
    int sum = 0, i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}