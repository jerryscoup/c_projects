#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int available;
};

struct Book library[MAX_BOOKS];
int totalBooks = 0;

void addBook() {
    if (totalBooks < MAX_BOOKS) {
        printf("Enter Book ID: ");
        scanf("%d", &library[totalBooks].id);
        printf("Enter Book Title: ");
        getchar();
        fgets(library[totalBooks].title, 100, stdin);
        library[totalBooks].title[strcspn(library[totalBooks].title, "\n")] = 0;
        printf("Enter Book Author: ");
        fgets(library[totalBooks].author, 100, stdin);
        library[totalBooks].author[strcspn(library[totalBooks].author, "\n")] = 0;
        library[totalBooks].available = 1;
        totalBooks++;
    } else {
        printf("Library is full.\n");
    }
}

void viewBooks() {
    for (int i = 0; i < totalBooks; i++) {
        printf("Book ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Availability: %s\n", library[i].available ? "Available" : "Not Available");
        printf("\n");
    }
}

void borrowBook() {
    int id, found = 0;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &id);
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id && library[i].available) {
            library[i].available = 0;
            printf("You have borrowed '%s'.\n", library[i].title);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not available or invalid ID.\n");
    }
}

void returnBook() {
    int id, found = 0;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id && !library[i].available) {
            library[i].available = 1;
            printf("You have returned '%s'.\n", library[i].title);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Invalid ID or the book was not borrowed.\n");
    }
}

int main() {
    int choice;
    do {
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
