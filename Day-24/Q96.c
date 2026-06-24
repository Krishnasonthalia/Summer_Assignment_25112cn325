#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}