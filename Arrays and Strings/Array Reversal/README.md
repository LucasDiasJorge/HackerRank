# Challenge: Reverse an Array

## Problem Description

Given an array of size `n`, reverse it.

### Input Format

- The first line contains an integer `n`, denoting the size of the array.
- The next line contains `n` space-separated integers representing the elements of the array.

### Constraints

- `1 <= n <= 1000`  
- `-1000 <= arr[i] <= 1000`, where `arr[i]` is the i-th element of the array.

### Output Format

- The output is handled by the code provided, which prints the reversed array in a single line, with each element separated by a space.

### Sample Input 0

```
6
16 13 7 2 1 12
```

### Sample Output 0

```
12 1 2 7 13 16
```

**Explanation:**

Given array `arr = [16, 13, 7, 2, 1, 12]`. After reversing the array, `arr = [12, 1, 2, 7, 13, 16]`.

### Sample Input 1

```
7
1 13 15 20 12 13 2
```

### Sample Output 1

```
2 13 12 20 15 13 1
```

### Sample Input 2

```
8
15 5 16 15 17 11 5 11
```

### Sample Output 2

```
11 5 11 17 15 16 5 15
```

---

## My Solution

```c
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
```

### Explanation

1. **Input Reading:** The program first reads the size of the array (`num`) and the array elements from the user input.
2. **Reversing the Array:** The program then reverses the array by swapping the elements from the beginning and the end of the array, gradually moving towards the center.
3. **Output:** After reversing, the array is printed in the new order.

### Memory Management

The program uses dynamic memory allocation (`malloc`) to create the array and `free` to release the memory after use.

_[HackerRank challenge](https://www.hackerrank.com/challenges/reverse-array-c)_
