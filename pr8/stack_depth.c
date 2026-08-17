#include <stdio.h>

void recursive_function(int depth) {
    int local_array[1000];
    local_array[0] = depth;
    
    printf("Глубина: %d, адрес локальной переменной: %p\n", depth, (void*)&local_array[0]);

    recursive_function(depth + 1);
}

int main() {
    printf("Исследование глубины стека\n");
    printf("Размер стека обычно 8 МБ (можно проверить ulimit -s)\n\n");
    
    recursive_function(1);
    
    return 0;
}