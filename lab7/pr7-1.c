#include <stdio.h>
#include <string.h> // для работы со строками (strcpy)

// Структура для хранения информации о студенте
typedef struct {
    char name[50];  // Имя студента (максимум 49 символов + '\0')
    float gpa;      // Средний балл
} Student;

int main() {
    // Создаем массив из 5 студентов
    Student students[5];

    // Заполняем массив данными
    strcpy(students[0].name, "Alice Smith");
    students[0].gpa = 3.8;

    strcpy(students[1].name, "Bob Johnson");
    students[1].gpa = 3.5;

    strcpy(students[2].name, "Charlie Brown");
    students[2].gpa = 3.2;

    strcpy(students[3].name, "David Lee");
    students[3].gpa = 3.9;

    strcpy(students[4].name, "Eve Wilson");
    students[4].gpa = 3.7;

    // Выводим информацию о студентах (для проверки)
    printf("Информация о студентах:\n");
    for (int i = 0; i < 5; i++) {
        printf("Студент %d: Имя - %s, Средний балл - %.2f\n", i + 1, students[i].name, students[i].gpa);
    }

    return 0;
}
