#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student student[100];
    int n = 0, choice, roll, i, j, found;

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &student[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", student[n].name);

                printf("Enter Age: ");
                scanf("%d", &student[n].age);

                printf("Enter Marks: ");
                scanf("%f", &student[n].marks);

                n++;
                printf("Student added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No records found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll No : %d\n", student[i].roll);
                        printf("Name    : %s\n", student[i].name);
                        printf("Age     : %d\n", student[i].age);
                        printf("Marks   : %.2f\n", student[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (student[i].roll == roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll No : %d\n", student[i].roll);
                        printf("Name    : %s\n", student[i].name);
                        printf("Age     : %d\n", student[i].age);
                        printf("Marks   : %.2f\n", student[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

                break;

            case 4:
                printf("Enter Roll Number to Update: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (student[i].roll == roll)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", student[i].name);

                        printf("Enter New Age: ");
                        scanf("%d", &student[i].age);

                        printf("Enter New Marks: ");
                        scanf("%f", &student[i].marks);

                        printf("Record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

                break;

            case 5:
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (student[i].roll == roll)
                    {
                        for (j = i; j < n - 1; j++)
                        {
                            student[j] = student[j + 1];
                        }

                        n--;
                        printf("Record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

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