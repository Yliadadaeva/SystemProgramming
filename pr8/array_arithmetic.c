#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    
    printf("a (имя массива):               %p\n", (void*)a);
    printf("&a[0] (адрес первого элемента): %p\n", (void*)&a[0]);
    printf("&a[1] (адрес второго элемента): %p\n", (void*)&a[1]);
    printf("&a[2] (адрес третьего элемента):%p\n", (void*)&a[2]);
    printf("&a[3] (адрес четвертого):       %p\n", (void*)&a[3]);
    printf("&a[4] (адрес пятого):           %p\n", (void*)&a[4]);
    
    printf("\n--- Указательная арифметика ---\n");
    printf("a + 0 = %p, значение = %d\n", (void*)(a + 0), *(a + 0));
    printf("a + 1 = %p, значение = %d\n", (void*)(a + 1), *(a + 1));
    printf("a + 2 = %p, значение = %d\n", (void*)(a + 2), *(a + 2));
    printf("a + 3 = %p, значение = %d\n", (void*)(a + 3), *(a + 3));
    printf("a + 4 = %p, значение = %d\n", (void*)(a + 4), *(a + 4));
    
    printf("\nРазница в байтах между &a[0] и &a[1]: %ld байт\n",
           (char*)&a[1] - (char*)&a[0]);
    
    return 0;
}