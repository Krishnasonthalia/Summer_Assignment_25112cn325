#include <stdio.h>

struct Ticket
{
    int seatNo;
    char name[50];
    int booked;
};

int main()
{
    struct Ticket ticket[10];
    int i, choice, seat, found;

    for (i = 0; i < 10; i++)
    {
        ticket[i].seatNo = i + 1;
        ticket[i].booked = 0;
    }

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Bookings\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                if (seat < 1 || seat > 10)
                {
                    printf("Invalid seat number.\n");
                    break;
                }

                if (ticket[seat - 1].booked)
                {
                    printf("Seat already booked.\n");
                }
                else
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", ticket[seat - 1].name);

                    ticket[seat - 1].booked = 1;
                    printf("Ticket booked successfully.\n");
                }
                break;

            case 2:
                printf("Enter Seat Number to cancel: ");
                scanf("%d", &seat);

                if (seat < 1 || seat > 10)
                {
                    printf("Invalid seat number.\n");
                    break;
                }

                if (ticket[seat - 1].booked)
                {
                    ticket[seat - 1].booked = 0;
                    printf("Ticket cancelled successfully.\n");
                }
                else
                {
                    printf("Seat is not booked.\n");
                }
                break;

            case 3:
                found = 0;

                printf("\nBooked Tickets:\n");

                for (i = 0; i < 10; i++)
                {
                    if (ticket[i].booked)
                    {
                        printf("Seat No: %d\n", ticket[i].seatNo);
                        printf("Passenger: %s\n\n", ticket[i].name);
                        found = 1;
                    }
                }

                if (!found)
                    printf("No tickets booked.\n");

                break;

            case 4:
                printf("\nAvailable Seats: ");

                for (i = 0; i < 10; i++)
                {
                    if (!ticket[i].booked)
                        printf("%d ", ticket[i].seatNo);
                }

                printf("\n");
                break;

            case 5:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}