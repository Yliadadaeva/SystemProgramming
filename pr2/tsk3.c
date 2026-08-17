#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int counter = 0;


#define ITERATIONS 1000000

void* incrementCounter(void* arg) {
    int thread_num = *(int*)arg;
    
    for (int i = 0; i < ITERATIONS; i++) {
        int temp = counter;  
        temp++;                
        counter = temp;         

    }
    
    printf("Поток %d завершил работу\n", thread_num);
    return NULL;
}

int main() {
    pthread_t threads[2];
    int thread_nums[2] = {1, 2};
    
    for (int i = 0; i < 2; i++) {
        pthread_create(&threads[i], NULL, incrementCounter, &thread_nums[i]);
    }

    for (int i = 0; i < 2; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Финальное значение counter = %d\n", counter);
    printf("Ожидалось: %d\n", 2 * ITERATIONS);
    
    return 0;
}