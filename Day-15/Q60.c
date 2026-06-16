#include <stdio.h>

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = 8, i, j = 0;

    
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

   
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}