#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contact[100];
    int n = 0, choice, i, found;
    char search[50];

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contact[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contact[n].phone);

                n++;
                printf("Contact added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\nContact List:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(contact[i].name, search) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;

            case 4:
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", search);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (strcmp(contact[i].name, search) == 0)
                    {
                        int j;

                        for (j = i; j < n - 1; j++)
                        {
                            contact[j] = contact[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Contact deleted successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;

            case 5:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}