#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;

    pid1 = fork();  // Создаём ребёнка

    if (pid1 < 0) {
        fprintf(stderr, "Ошибка при создании процесса\n");
        return 1;
    } 
    else if (pid1 == 0) {
        // Ребёнок
        pid2 = fork();  // Создаём внука

        if (pid2 < 0) {
            fprintf(stderr, "Ошибка при создании внука\n");
            return 1;
        } 
        else if (pid2 == 0) {
            // Внук
            printf("Внук: PID = %d, уровень = внук\n", getpid());
        } 
        else {
            // Ребёнок (родитель для внука)
            printf("Потомок: PID = %d, уровень = потомок\n", getpid());
            wait(NULL);  // Ждём завершения внука
        }
    } 
    else {
        // Родитель
        printf("Родитель: PID = %d, уровень = родитель\n", getpid());
        wait(NULL);  // Ждём завершения ребёнка
    }

    return 0;
}