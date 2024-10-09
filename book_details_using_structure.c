#include <stdio.h>
struct Book {
    char name[100];
    int pages;
    float price;
    char author[100];
};

int main() {
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar();

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Book Name: ");
        fgets(books[i].name, 100, stdin);

        printf("Number of Pages: ");
        scanf("%d", &books[i].pages);

        printf("Price of the Book: ");
        scanf("%f", &books[i].price);

        getchar();

        printf("Author of the Book: ");
        fgets(books[i].author, 100, stdin);
    }

    printf("\nDetails of the Books:\n");

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book Name: %s", books[i].name);
        printf("Number of Pages: %d\n", books[i].pages);
        printf("Price: $%.2f\n", books[i].price);
        printf("Author: %s", books[i].author);
    }

    return 0;
}
