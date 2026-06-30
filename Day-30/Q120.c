#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void averageMarks();

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Average Marks\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                averageMarks();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d",&s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s[n].name);

    printf("Enter Age: ");
    scanf("%d",&s[n].age);

    printf("Enter Marks: ");
    scanf("%f",&s[n].marks);

    n++;

    printf("Student Added Successfully\n");
}

void displayStudents()
{
    int i;

    if(n==0)
    {
        printf("No Records Found\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll : %d\n",s[i].roll);
        printf("Name : %s\n",s[i].name);
        printf("Age : %d\n",s[i].age);
        printf("Marks : %.2f\n",s[i].marks);
    }
}

void searchStudent()
{
    int roll,i,found=0;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found\n");
            printf("Roll : %d\n",s[i].roll);
            printf("Name : %s\n",s[i].name);
            printf("Age : %d\n",s[i].age);
            printf("Marks : %.2f\n",s[i].marks);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found\n");
}

void updateStudent()
{
    int roll,i,found=0;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]",s[i].name);

            printf("Enter New Age: ");
            scanf("%d",&s[i].age);

            printf("Enter New Marks: ");
            scanf("%f",&s[i].marks);

            printf("Record Updated Successfully\n");
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Student Not Found\n");
}

void deleteStudent()
{
    int roll,i,j,found=0;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }

            n--;
            found=1;
            printf("Record Deleted Successfully\n");
            break;
        }
    }

    if(found==0)
        printf("Student Not Found\n");
}

void averageMarks()
{
    int i;

    float sum=0;

    if(n==0)
    {
        printf("No Records Found\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        sum=sum+s[i].marks;
    }

    printf("Average Marks = %.2f\n",sum/n);
}