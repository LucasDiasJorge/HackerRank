#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int loop_aux = num - 1;
    int started_index = 0;

    while(started_index < loop_aux){

      int temp = arr[started_index];
      arr[started_index] = arr[loop_aux];
      arr[loop_aux] = temp;

      loop_aux--;
      started_index++;

    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    free(arr);

    return 0;
}