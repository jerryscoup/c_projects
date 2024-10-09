#include <stdio.h>

struct Student {
    char studentName[50];
    int subjectMarks[5];
    char subjectNames[5][50];
    int totalMarks;
    float avgMarks;
};

void getDetails(struct Student *stu, int numSubjects) {
    printf("Enter the student's name: ");
    scanf("%s", stu->studentName);

    for (int i = 0; i < numSubjects; i++) {
        printf("Enter subject %d name: ", i + 1);
        scanf("%s", stu->subjectNames[i]);
        printf("Enter marks for %s: ", stu->subjectNames[i]);
        scanf("%d", &stu->subjectMarks[i]);
    }
}

void calculateMarks(struct Student *stu, int numSubjects) {
    stu->totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        stu->totalMarks += stu->subjectMarks[i];
    }
    stu->avgMarks = (float)stu->totalMarks / numSubjects;
}

void showResults(struct Student stu, int numSubjects) {
    printf("\nStudent Name: %s\n", stu.studentName);
    printf("Marks in Subjects:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("%s: %d - ", stu.subjectNames[i], stu.subjectMarks[i]);
        if (stu.subjectMarks[i] > 40) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
    printf("Total Marks: %d\n", stu.totalMarks);
    printf("Average Marks: %.2f\n", stu.avgMarks);
}

int main() {
    struct Student stu;
    int numSubjects = 4;

    getDetails(&stu, numSubjects);
    calculateMarks(&stu, numSubjects);
    showResults(stu, numSubjects);

    return 0;
}
