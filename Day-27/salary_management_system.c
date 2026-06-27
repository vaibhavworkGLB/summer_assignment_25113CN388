#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    struct Employee emp;
    int choice;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &emp.bonus);

    emp.totalSalary = emp.basicSalary + emp.bonus;

    do
    {
        printf("\n----- Menu -----\n");
        printf("1. Display Salary Details\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Details\n");
                printf("Employee ID   : %d\n", emp.id);
                printf("Employee Name : %s\n", emp.name);
                printf("Basic Salary  : %.2f\n", emp.basicSalary);
                printf("Bonus         : %.2f\n", emp.bonus);
                printf("Total Salary  : %.2f\n", emp.totalSalary);
                break;

            case 2:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 2);

    return 0;
}