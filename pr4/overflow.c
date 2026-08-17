#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int i;
  int choice;

  printf("Выберите режим (1 - нормальный, 2 - с отладочным выводом): ");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Нормальный режим:\n");
    for (i = 0; i < 5; i++) {
      printf("arr[%d] = %d\n", i, arr[i]);
    }
  } else if (choice == 2) {
    printf("Отладочный режим (без переполнения, показывает адреса):\n");
    for (i = 0; i < 6; i++) {
      if(i < 5){
          printf("arr[%d] = %d, адрес: %p\n", i, arr[i], &arr[i]);
      } else {
          printf("Проверка за границами массива: arr[%d], адрес: %p (может быть за границами)\n", i, (void*)(&arr[i])); // address is no longer valid pointer.
      }
    }

  } else {
    printf("Неверный выбор.\n");
    return 1;
  }

  return 0;
}



