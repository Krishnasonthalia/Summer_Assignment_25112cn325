#include <stdio.h>

struct Book
{
    int id;
    char title[100];
    char author[100];
    int issued;
};

int main()
{
    struct Book books[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
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
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[n].author);

                books[n].issued = 0;
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
                    printf("\nBook List:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        if (books[i].issued)
                            printf("Status: Issued\n");
                        else
                            printf("Status: Available\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (books[i].id == id)
                    {
                        printf("\nBook Found\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        if (books[i].issued)
                            printf("Status: Issued\n");
                        else
                            printf("Status: Available\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (books[i].id == id)
                    {
                        if (books[i].issued)
                            printf("Book is already issued.\n");
                        else
                        {
                            books[i].issued = 1;
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
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (books[i].id == id)
                    {
                        if (books[i].issued)
                        {
                            books[i].issued = 0;
                            printf("Book returned successfully.\n");
                        }
                        else
                            printf("Book was not issued.\n");

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}