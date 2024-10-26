#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 256

char tasks[MAX_TASKS][TASK_LENGTH];
int task_count = 0;

void add_task() {
    if (task_count < MAX_TASKS) {
        printf("Enter task: ");
        fgets(tasks[task_count], TASK_LENGTH, stdin);
        tasks[task_count][strcspn(tasks[task_count], "\n")] = 0;
        task_count++;
    } else {
        printf("Task limit reached.\n");
    }
}

void view_tasks() {
    if (task_count == 0) {
        printf("No tasks available.\n");
        return;
    }
    for (int i = 0; i < task_count; i++) {
        printf("%d: %s\n", i + 1, tasks[i]);
    }
}

void delete_task() {
    int index;
    printf("Enter task number to delete: ");
    scanf("%d", &index);
    getchar();
    if (index < 1 || index > task_count) {
        printf("Invalid task number.\n");
        return;
    }
    for (int i = index - 1; i < task_count - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }
    task_count--;
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1: add_task(); break;
            case 2: view_tasks(); break;
            case 3: delete_task(); break;
            case 4: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
