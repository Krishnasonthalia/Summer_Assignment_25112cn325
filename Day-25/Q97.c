#include <stdio.h>

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

   
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < n1) {
        merged[k++] = a[i++];
    }

    while (j < n2) {
        merged[k++] = b[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}