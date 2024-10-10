#include <stdio.h>

struct MenuItem {
    int id;
    char name[30];
    float price;
};

int main() {
    struct MenuItem menu[10] = {
        {1, "Burger", 149.00},
        {2, "Pizza", 299.00},
        {3, "Pasta", 249.00},
        {4, "Salad", 99.00},
        {5, "Soda", 49.00},
        {6, "Sandwich", 129.00},
        {7, "Fries", 89.00},
        {8, "Milkshake", 199.00},
        {9, "Coffee", 79.00},
        {10, "Ice Cream", 99.00}
    };

    int choice, quantity;
    float total = 0;
    char more = 'y';

    printf("Hotel Menu:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %s - ₹%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }

    while (more == 'y' || more == 'Y') {
        printf("Enter the item number to order: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice >= 1 && choice <= 10) {
            total += menu[choice - 1].price * quantity;
            printf("Added %d x %s to your order (₹%.2f each).\n", quantity, menu[choice - 1].name, menu[choice - 1].price);
        } else {
            printf("Invalid item number.\n");
        }

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);
    }

    printf("Total amount to be paid: ₹%.2f\n", total);

    return 0;
}

