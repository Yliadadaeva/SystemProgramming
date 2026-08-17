#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Ошибка при создании процесса\n");
        return 1;
    } else if (pid == 0) {
        // Дочерний процесс
        printf("Я – ребёнок, вот мой PID: %d\n", getpid());
    } else {
        // Родительский процесс
        printf("Я – родитель, мой PID: %d\n", getpid());
    }

    return 0;
}