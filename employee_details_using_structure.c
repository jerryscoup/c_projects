#include <stdio.h>
#include <string.h>

struct Emp {
    int emp_id;
    float salary;
    int age;
    char date_of_joining[15];
};

int main() {
    int num, i;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    struct Emp employees[num];

    for (i = 0; i < num; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Date of Joining (dd-mm-yyyy): ");
        scanf("%s", employees[i].date_of_joining);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < num; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
        printf("Date of Joining: %s\n", employees[i].date_of_joining);
    }

    return 0;
}
