#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 7, 3, 2};
    int n = 6, sum = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}