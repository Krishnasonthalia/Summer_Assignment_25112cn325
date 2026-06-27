#include <stdio.h>
#include <string.h>

int main() {
    char word[10][50], temp[50];
    int i, j, n;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", word[i]);
    }

    return 0;
}