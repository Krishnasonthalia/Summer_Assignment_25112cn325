#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc[100];
    int n = 0, choice, accNo, i, found;
    float amount;

    while (1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &acc[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", acc[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc[n].balance);

                n++;
                printf("Account created successfully.\n");
                break;

            case 2:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);

                        acc[i].balance += amount;
                        printf("Amount deposited successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);

                        if (amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;
                            printf("Withdrawal successful.\n");
                        }
                        else
                        {
                            printf("Insufficient balance.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (acc[i].accNo == accNo)
                    {
                        printf("\nAccount Number: %d\n", acc[i].accNo);
                        printf("Account Holder: %s\n", acc[i].name);
                        printf("Balance: %.2f\n", acc[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;

            case 5:
                if (n == 0)
                {
                    printf("No accounts available.\n");
                }
                else
                {
                    printf("\nAccount Details:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nAccount %d\n", i + 1);
                        printf("Account Number: %d\n", acc[i].accNo);
                        printf("Name: %s\n", acc[i].name);
                        printf("Balance: %.2f\n", acc[i].balance);
                    }
                }
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