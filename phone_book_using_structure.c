#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

void addContact(struct Contact phoneBook[], int *size) {
    printf("Enter name: ");
    scanf("%s", phoneBook[*size].name);
    printf("Enter phone number: ");
    scanf("%s", phoneBook[*size].phone);
    (*size)++;
}

void displayContacts(struct Contact phoneBook[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Phone: %s\n", phoneBook[i].name, phoneBook[i].phone);
    }
}

void searchContact(struct Contact phoneBook[], int size) {
    char searchName[50];
    printf("Enter name to search: ");
    scanf("%s", searchName);
    for (int i = 0; i < size; i++) {
        if (strcmp(phoneBook[i].name, searchName) == 0) {
            printf("Found: Name: %s, Phone: %s\n", phoneBook[i].name, phoneBook[i].phone);
            return;
        }
    }
    printf("Contact not found\n");
}

int main() {
    struct Contact phoneBook[100];
    int size = 0;
    int choice;

    do {
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(phoneBook, &size);
                break;
            case 2:
                displayContacts(phoneBook, size);
                break;
            case 3:
                searchContact(phoneBook, size);
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
