#include <stdio.h>
#include <string.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                a.balance = a.balance + amount;

                printf("Money Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if(amount <= a.balance)
                {
                    a.balance = a.balance - amount;
                    printf("Money Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", a.balance);
                break;

            case 4:
                printf("\nAccount Number : %d\n", a.accNo);
                printf("Account Holder : %s\n", a.name);
                printf("Balance : %.2f\n", a.balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}