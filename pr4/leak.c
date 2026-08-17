#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;

  ptr = (int *)malloc(sizeof(int));

  if (ptr == NULL) {
    fprintf(stderr, "Ошибка выделения памяти!\n");
    return 1;
  }

  *ptr = 42;

  printf("Значение: %d\n", *ptr);

  free(ptr);

  return 0;
}
