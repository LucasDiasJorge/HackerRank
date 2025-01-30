#include <stdio.h>
#include <stdlib.h>

int main() {

  int arr_size;
  scanf("%d", &arr_size);

  int *arr = malloc(arr_size * sizeof(int));

  int looping_aux = 0;
  int sum_aux = 0;

  while (scanf("%d", &arr[looping_aux]) != EOF) {

    sum_aux = sum_aux + arr[looping_aux];

    if (looping_aux == arr_size - 1) {
      break;
    }

    looping_aux++;
  }

  printf("%d\n", sum_aux);

  return 0;
}