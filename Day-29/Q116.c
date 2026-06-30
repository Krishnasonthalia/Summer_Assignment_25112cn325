#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product product[100];
    int n = 0, choice, id, i, found, j;
    int newQty;

    while (1)
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &product[n].id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", product[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &product[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &product[n].price);

                n++;
                printf("Product added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\nProduct List:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nProduct %d\n", i + 1);
                        printf("ID       : %d\n", product[i].id);
                        printf("Name     : %s\n", product[i].name);
                        printf("Quantity : %d\n", product[i].quantity);
                        printf("Price    : %.2f\n", product[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (product[i].id == id)
                    {
                        printf("\nProduct Found\n");
                        printf("ID       : %d\n", product[i].id);
                        printf("Name     : %s\n", product[i].name);
                        printf("Quantity : %d\n", product[i].quantity);
                        printf("Price    : %.2f\n", product[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (product[i].id == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &newQty);

                        product[i].quantity = newQty;
                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 5:
                printf("Enter Product ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (product[i].id == id)
                    {
                        for (j = i; j < n - 1; j++)
                        {
                            product[j] = product[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Product deleted successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

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