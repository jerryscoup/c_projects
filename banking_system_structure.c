#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount(struct Account accounts[], int *accountCount) {
    printf("Enter account number: ");
    scanf("%d", &accounts[*accountCount].accountNumber);
    printf("Enter name: ");
    scanf("%s", accounts[*accountCount].name);
    printf("Enter initial balance: ");
    scanf("%f", &accounts[*accountCount].balance);
    (*accountCount)++;
    printf("Account created successfully.\n");
}

void displayAccount(struct Account accounts[], int accountCount) {
    int accNo, found = 0;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Name: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Account not found.\n");
    }
}

void deposit(struct Account accounts[], int accountCount) {
    int accNo, found = 0;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Account not found.\n");
    }
}

void withdraw(struct Account accounts[], int accountCount) {
    int accNo, found = 0;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Account not found.\n");
    }
}

int main() {
    struct Account accounts[100];
    int accountCount = 0, choice;
    do {
        printf("\n1. Create Account\n2. Display Account\n3. Deposit\n4. Withdraw\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(accounts, &accountCount); break;
            case 2: displayAccount(accounts, accountCount); break;
            case 3: deposit(accounts, accountCount); break;
            case 4: withdraw(accounts, accountCount); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
