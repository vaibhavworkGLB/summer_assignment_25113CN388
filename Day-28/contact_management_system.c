#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[50];
    int n = 0;
    int choice, i;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;

                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                    }
                }
                break;

            case 3:
            {
                char search[50];
                int found = 0;

                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(c[i].name, search) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        found = 1;
                    }
                }

                if(found == 0)
                {
                    printf("Contact Not Found.\n");
                }

                break;
            }

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}