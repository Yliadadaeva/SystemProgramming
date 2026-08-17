#include <stdio.h>
#include <stdlib.h>

int global_var = 10;                       
static int static_var_initialized = 20;    
static int static_var_uninitialized;       

int main() {
    int local_var = 30;                   
    int *heap_var = (int*)malloc(sizeof(int)); 
    *heap_var = 40;                       
    
    printf("Адрес global_var (данные):                %p\n", (void*)&global_var);
    printf("Адрес static_var_initialized (данные):    %p\n", (void*)&static_var_initialized);
    printf("Адрес static_var_uninitialized (BSS):     %p\n", (void*)&static_var_uninitialized);
    printf("Адрес local_var (стек):                   %p\n", (void*)&local_var);
    printf("Адрес heap_var (сам указатель, стек):     %p\n", (void*)&heap_var);
    printf("Адрес данных в куче (malloc):             %p\n", (void*)heap_var);
    
    free(heap_var);
    return 0;
}