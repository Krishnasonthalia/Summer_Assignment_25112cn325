#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, i, j, len;

    while (1)
    {
        printf("\n===== String Operations =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = 0;
                while (str1[len] != '\0')
                    len++;

                printf("Length = %d\n", len);
                break;

            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                i = 0;
                while (str1[i] != '\0')
                {
                    temp[i] = str1[i];
                    i++;
                }
                temp[i] = '\0';

                printf("Copied String: %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                i = 0;
                while (str1[i] != '\0')
                    i++;

                j = 0;
                while (str2[j] != '\0')
                {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }

                str1[i] = '\0';

                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                i = 0;

                while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
                    i++;

                if (str1[i] == str2[i])
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = 0;
                while (str1[len] != '\0')
                    len++;

                printf("Reversed String: ");

                for (i = len - 1; i >= 0; i--)
                    printf("%c", str1[i]);

                printf("\n");
                break;

            case 6:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}