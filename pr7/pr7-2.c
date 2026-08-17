#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float gpa;
};

void print_student(struct Student s) {
    printf("%s, GPA: %.2f\n", s.name, s.gpa);
}

float average_gpa(struct Student arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].gpa;
    }
    return sum / n;
}

void sort_student(struct Student arr[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].gpa < arr[j].gpa) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_group(struct Student arr[], int n) {
    printf("\nГруппа студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        print_student(arr[i]);
    }
}

int main() {

    struct Student group[5] = {
        {"Ivan", 4.5},
        {"Maria", 4.8},
        {"Petr", 3.9},
        {"Anna", 5.0},
        {"Alexey Smirnov", 4.2}
    };

    printf("Информация о студентах:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, GPA: %.2f\n", group[i].name, group[i].gpa);
    }

    float avg = average_gpa(group, 5);
    printf("\nСредний балл группы: %.2f\n", avg);

    print_group(group, 5);

    sort_student(group, 5);
    printf("\nПосле сортировки по GPA (по убыванию):");
    print_group(group, 5);
    
    return 0;
}