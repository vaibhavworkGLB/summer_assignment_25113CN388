#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book b[50];
    int n = 0;
    int choice, i, id, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                b[n].issued = 0;
                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook List:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID : %d\n", b[i].id);
                        printf("Book Name : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);

                        if(b[i].issued == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(b[i].issued == 0)
                        {
                            b[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(b[i].issued == 1)
                        {
                            b[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book was not issued.\n");
                        }
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

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