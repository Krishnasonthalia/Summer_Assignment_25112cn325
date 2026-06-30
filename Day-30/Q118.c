#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book book[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

                book[n].issued = 0;

                n++;
                printf("Book added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nLibrary Books:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", book[i].id);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);

                        if (book[i].issued)
                            printf("Status  : Issued\n");
                        else
                            printf("Status  : Available\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", book[i].id);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);

                        if (book[i].issued)
                            printf("Status  : Issued\n");
                        else
                            printf("Status  : Available\n");

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == id)
                    {
                        if (book[i].issued)
                        {
                            printf("Book is already issued.\n");
                        }
                        else
                        {
                            book[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (book[i].id == id)
                    {
                        if (book[i].issued)
                        {
                            book[i].issued = 0;
                            printf("Book returned successfully.\n");
                        }
                        else
                        {
                            printf("Book was not issued.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

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