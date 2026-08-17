#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    float gpa;
};

void print_student(struct Student s) {
    printf("%s, GPA: %.2f\n", s.name, s.gpa);
}

void print_group(struct Student *arr, int n) {
    printf("\nСписок студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        print_student(arr[i]);
    }
}

float average_gpa(struct Student *arr, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].gpa;
    }
    return sum / n;
}

int main() {
    int n;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);

    struct Student *group = (struct Student*)malloc(n * sizeof(struct Student));
    
    if (group == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nСтудент %d:\n", i + 1);
        printf("Имя: ");
        scanf("%s", group[i].name);
        printf("Средний балл: ");
        scanf("%f", &group[i].gpa);
    }

    print_group(group, n);

    printf("\nСредний балл группы: %.2f\n", average_gpa(group, n));

    free(group);
    
    return 0;
}