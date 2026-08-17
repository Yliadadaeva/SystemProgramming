#include <stdio.h>
#include <stdlib.h>

// Глобальные переменные
int global_init = 100;
int global_uninit;
static int static_init = 200;
static int static_uninit;

void show_segments() {
    int local = 300;
    int *heap = malloc(sizeof(int));
    *heap = 400;
    
    printf("\n=== Сегменты памяти процесса ===\n");
    printf("Текст (код) функции:           %p\n", (void*)show_segments);
    printf("Глобальная инициализированная: %p (data)\n", (void*)&global_init);
    printf("Статическая инициализированная:%p (data)\n", (void*)&static_init);
    printf("Глобальная неинициализированная:%p (BSS)\n", (void*)&global_uninit);
    printf("Статическая неинициализированная:%p (BSS)\n", (void*)&static_uninit);
    printf("Куча (malloc):                 %p (heap)\n", (void*)heap);
    printf("Локальная переменная:          %p (stack)\n", (void*)&local);
    
    free(heap);
}

int main() {
    show_segments();
    return 0;
}