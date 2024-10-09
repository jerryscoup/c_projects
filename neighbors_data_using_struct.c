#include <stdio.h>
struct Neighbor {
    char name[50];
    int houseNumber;
    int numFamilyMembers;
    char phoneNumber[15];
};

void inputDetails(struct Neighbor neighbors[], int num) {
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for Neighbor %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", neighbors[i].name);
        printf("Enter House Number: ");
        scanf("%d", &neighbors[i].houseNumber);
        printf("Enter Number of Family Members: ");
        scanf("%d", &neighbors[i].numFamilyMembers);
        printf("Enter Phone Number: ");
        scanf("%s", neighbors[i].phoneNumber);
    }
}

void displayDetails(struct Neighbor neighbors[], int num) {
    printf("\nDetails of Neighbors in the Society:\n");
    for (int i = 0; i < num; i++) {
        printf("\nNeighbor %d:\n", i + 1);
        printf("Name: %s\n", neighbors[i].name);
        printf("House Number: %d\n", neighbors[i].houseNumber);
        printf("Number of Family Members: %d\n", neighbors[i].numFamilyMembers);
        printf("Phone Number: %s\n", neighbors[i].phoneNumber);
    }
}

int main() {
    const int numNeighbors = 7;
    struct Neighbor neighbors[numNeighbors];

    inputDetails(neighbors, numNeighbors);
    displayDetails(neighbors, numNeighbors);

    return 0;
}
