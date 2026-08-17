#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* printY(void* unused) {
    while (1) {
        printf("y");
        fflush(stdout);
    }
    return NULL;
}

int main() {
    pthread_t threadId;

    pthread_create(&threadId, NULL, printY, NULL);

    while (1) {
        printf("e");
        fflush(stdout);
    }
    
    return 0;
}