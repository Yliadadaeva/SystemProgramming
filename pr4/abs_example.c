#include <stdio.h>

int abs_val(int num) {
  if (num < 0) {
    return -num;
  } else {
    return num;
  }
}

int main() {
  int number;

  printf("Введите целое число: ");
  scanf("%d", &number);

  int absolute_value = abs_val(number);

  printf("Абсолютное значение числа %d равно %d\n", number, absolute_value);

  return 0;
}

