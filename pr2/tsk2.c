#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* printChar(void* arg) {
    char ch = *(char*)arg;
    while (1) {
        printf("%c", ch);
        fflush(stdout);

    }
    return NULL;
}

int main() {
    pthread_t threads[3];
    char symbols[3] = {'A', 'B', 'C'};

    for (int i = 0; i < 3; i++) {
        pthread_create(&threads[i], NULL, printChar, &symbols[i]);
    }

    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }
    
    return 0;
}