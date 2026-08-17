#include <stdio.h>

int main() {
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    int *ptr;  
    
    printf("Размер char:        %zu байт\n", sizeof(char));
    printf("Размер short:       %zu байт\n", sizeof(short));
    printf("Размер int:         %zu байт\n", sizeof(int));
    printf("Размер long:        %zu байт\n", sizeof(long));
    printf("Размер long long:   %zu байт\n", sizeof(long long));
    printf("Размер float:       %zu байт\n", sizeof(float));
    printf("Размер double:      %zu байт\n", sizeof(double));
    printf("Размер int*:        %zu байт\n", sizeof(int*));
    printf("Размер size_t:      %zu байт\n", sizeof(size_t));
    
    return 0;
}