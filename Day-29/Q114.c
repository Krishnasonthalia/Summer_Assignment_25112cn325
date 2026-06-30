#include <stdio.h>

int main()
{
    int arr[100], n = 0;
    int choice, i, pos, value, found;

    while (1)
    {
        printf("\n===== Array Operations =====\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Find Maximum\n");
        printf("7. Find Minimum\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);

                break;

            case 2:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for (i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;

            case 3:
                printf("Enter position (1-%d): ", n + 1);
                scanf("%d", &pos);

                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;

            case 4:
                printf("Enter position (1-%d): ", n);
                scanf("%d", &pos);

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;

                printf("Element deleted successfully.\n");
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Element not found.\n");

                break;

            case 6:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    int max = arr[0];

                    for (i = 1; i < n; i++)
                    {
                        if (arr[i] > max)
                            max = arr[i];
                    }

                    printf("Maximum Element = %d\n", max);
                }

                break;

            case 7:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    int min = arr[0];

                    for (i = 1; i < n; i++)
                    {
                        if (arr[i] < min)
                            min = arr[i];
                    }

                    printf("Minimum Element = %d\n", min);
                }

                break;

            case 8:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}