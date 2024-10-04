#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grades[3];
};

void inputStudents(struct Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", (students + i)->name);
        printf("Enter age: ");
        scanf("%d", &(students + i)->age);
        printf("Enter three grades: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &(students + i)->grades[j]);
        }
    }
}

void displayStudents(struct Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", (students + i)->name);
        printf("Age: %d\n", (students + i)->age);
        printf("Grades: ");
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", (students + i)->grades[j]);
        }
        printf("\n");
    }
}

float calculateAverage(float* grades, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(grades + i);
    }
    return sum / size;
}

void findTopStudent(struct Student* students, int count) {
    int topIndex = 0;
    float topAverage = calculateAverage(students[0].grades, 3);
    
    for (int i = 1; i < count; i++) {
        float avg = calculateAverage(students[i].grades, 3);
        if (avg > topAverage) {
            topAverage = avg;
            topIndex = i;
        }
    }
    
    printf("\nTop student is: %s with an average grade of %.2f\n", students[topIndex].name, topAverage);
}

int main() {
    int numStudents = 3;
    struct Student students[3];
    struct Student* ptr = students;
    
    inputStudents(ptr, numStudents);
    displayStudents(ptr, numStudents);
    findTopStudent(ptr, numStudents);
    
    return 0;
}
