#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        printf("HRA: ");
        scanf("%f", &e[i].hra);

        printf("DA: ");
        scanf("%f", &e[i].da);

        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Details\n");
    printf("-----------------------------------------------------------\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross\n");
    printf("-----------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               e[i].id, e[i].name, e[i].basic,
               e[i].hra, e[i].da, e[i].gross);
    }

    return 0;
}