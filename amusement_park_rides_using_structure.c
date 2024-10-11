#include <stdio.h>
#include <string.h>

#define USD_TO_INR 83.0

struct Ride {
    char name[50];
    float priceInINR;
    int minHeight;
    int maxCapacity;
};

void displayRides(struct Ride rides[], int count) {
    printf("Available Rides:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s (Price: ₹%.2f INR, Min Height: %d cm, Max Capacity: %d)\n", 
                i + 1, rides[i].name, rides[i].priceInINR, rides[i].minHeight, rides[i].maxCapacity);
    }
}

int main() {
    struct Ride amusementRides[5] = {
        {"Roller Coaster", 5.00 * USD_TO_INR, 120, 24},
        {"Ferris Wheel", 3.50 * USD_TO_INR, 100, 30},
        {"Haunted House", 4.00 * USD_TO_INR, 110, 10},
        {"Bumper Cars", 2.50 * USD_TO_INR, 90, 20},
        {"Water Slide", 4.50 * USD_TO_INR, 130, 15}
    };

    int rideChoice, count = 5, numUsers;
    char continueRiding = 'y';
    float totalBill = 0;

    printf("Welcome to the Amusement Park!\n");

    printf("Enter the number of users: ");
    scanf("%d", &numUsers);

    for (int user = 1; user <= numUsers; user++) {
        printf("\nUser %d, please select your rides:\n", user);
        totalBill = 0;

        while (continueRiding == 'y' || continueRiding == 'Y') {
            displayRides(amusementRides, count);

            printf("Select a ride by entering the ride number (1-%d): ", count);
            scanf("%d", &rideChoice);

            if (rideChoice >= 1 && rideChoice <= count) {
                printf("You have selected the %s ride. Enjoy your ride!\n", amusementRides[rideChoice - 1].name);
                printf("Price: ₹%.2f INR\n", amusementRides[rideChoice - 1].priceInINR);
                totalBill += amusementRides[rideChoice - 1].priceInINR;
            } else {
                printf("Invalid choice. Please select a valid ride number.\n");
            }

            printf("Would you like to choose another ride? (y/n): ");
            scanf(" %c", &continueRiding);
        }

        printf("\nUser %d's total bill: ₹%.2f INR\n", user, totalBill);
        printf("--------------------------------------------\n");
        continueRiding = 'y'; 
    }

    printf("Thank you for visiting the amusement park! Have a great day!\n");

    return 0;
}
