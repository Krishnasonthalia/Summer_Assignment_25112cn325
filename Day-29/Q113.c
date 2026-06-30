#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    while (1)
    {
        printf("\n===== Menu Driven Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Result = %d\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);

                if (b != 0)
                    printf("Result = %.2f\n", (float)a / b);
                else
                    printf("Division by zero is not allowed.\n");

                break;

            case 5:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);

                if (b != 0)
                    printf("Result = %d\n", a % b);
                else
                    printf("Modulus by zero is not allowed.\n");

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