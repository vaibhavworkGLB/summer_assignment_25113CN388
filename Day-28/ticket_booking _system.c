#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
    float price;
};

int main()
{
    struct Ticket t;
    int choice;
    int booked = 0;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(booked == 0)
                {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &t.ticketNo);

                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", t.name);

                    printf("Enter Number of Seats: ");
                    scanf("%d", &t.seats);

                    t.price = t.seats * 250;

                    booked = 1;

                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Ticket is already booked.\n");
                }
                break;

            case 2:
                if(booked == 1)
                {
                    printf("\n----- Ticket Details -----\n");
                    printf("Ticket Number : %d\n", t.ticketNo);
                    printf("Passenger Name: %s\n", t.name);
                    printf("Seats         : %d\n", t.seats);
                    printf("Total Price   : %.2f\n", t.price);
                }
                else
                {
                    printf("No ticket booked.\n");
                }
                break;

            case 3:
                if(booked == 1)
                {
                    booked = 0;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("No ticket to cancel.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}