#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float gpa;
};

int main() {
    struct Student group[5];

    struct Student s0 = {"Ivan", 4.5};
    struct Student s1 = {"Maria", 4.8};
    struct Student s2 = {"Petr", 3.9};
    struct Student s3 = {"Anna", 5.0};
    struct Student s4 = {"Alexey Smirnov", 4.2};
    
    group[0] = s0;
    group[1] = s1;
    group[2] = s2;
    group[3] = s3;
    group[4] = s4;

    printf("Список студентов:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student: %s, GPA: %.2f\n", group[i].name, group[i].gpa);
    }
    
    return 0;
}