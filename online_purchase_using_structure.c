#include <stdio.h>

struct Item {
    int id;
    char name[30];
    float price;
    int quantity;
};

int main() {
    struct Item list[5] = {
        {1, "Laptop", 50000.00, 0},
        {2, "Smartphone", 15000.00, 0},
        {3, "Headphones", 2000.00, 0},
        {4, "Keyboard", 1000.00, 0},
        {5, "Mouse", 500.00, 0}
    };

    int choice, quantity;
    float total = 0;
    char more = 'y';

    printf("Online Buying List:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s - ₹%.2f\n", list[i].id, list[i].name, list[i].price);
    }

    while (more == 'y' || more == 'Y') {
        printf("Enter the item number to add to your cart: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice >= 1 && choice <= 5) {
            list[choice - 1].quantity += quantity;
            total += list[choice - 1].price * quantity;
            printf("Added %d x %s to your cart (₹%.2f each).\n", quantity, list[choice - 1].name, list[choice - 1].price);
        } else {
            printf("Invalid item number.\n");
        }

        printf("Do you want to add more items? (y/n): ");
        scanf(" %c", &more);
    }

    printf("\nYour Cart:\n");
    for (int i = 0; i < 5; i++) {
        if (list[i].quantity > 0) {
            printf("%d x %s - ₹%.2f each\n", list[i].quantity, list[i].name, list[i].price);
        }
    }
    printf("Total amount: ₹%.2f\n", total);

    return 0;
}
