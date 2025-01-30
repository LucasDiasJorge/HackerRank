# Dynamic Array Sum in C

## **Challenge Description**
In this challenge, you will dynamically allocate an array in C, read its values from standard input, compute the sum of its elements, and then free the allocated memory.

### **Background**
An array is a container that holds a fixed number of elements of a single type. In C, arrays can be either **static** (allocated at compile time) or **dynamic** (allocated at runtime).

To create a **static array**, you can declare:
```c
int arr[n];
```
However, this requires knowing the size at compile time.

To create a **dynamic array**, we use the `malloc` function, which allocates memory on the heap:
```c
int *arr = (int*)malloc(n * sizeof(int));
```
Here, `arr` points to the base address of the allocated memory.

After using the array, we must free the allocated memory to prevent memory leaks:
```c
free(arr);
```

---

## **Task**
1. Read an integer \( n \) from the input, which represents the number of elements in the array.
2. Dynamically allocate an integer array of size \( n \).
3. Read \( n \) space-separated integers and store them in the array.
4. Compute the sum of the elements in the array.
5. Print the computed sum.
6. Free the dynamically allocated memory.

---

## **Input Format**
- The first line contains an integer, \( n \), representing the number of elements in the array.
- The second line contains \( n \) space-separated integers.

### **Constraints**
- \( 1 \leq n \leq 1000 \)
- \( -1000 \leq \) each integer \( \leq 1000 \)

---

## **Output Format**
- Print the sum of the integers in the array.

---

## **Example**
### **Input 1**
```
6
16 13 7 2 1 12
```
### **Output 1**
```
51
```

### **Input 2**
```
7
1 13 15 20 12 13 2
```
### **Output 2**
```
76
```

---

## **Solution Implementation**
### **C Code**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr_size;
    scanf("%d", &arr_size);

    int *arr = malloc(arr_size * sizeof(int));
    int looping_aux = 0;
    int sum_aux = 0;

    while (scanf("%d", &arr[looping_aux]) != EOF) {
        sum_aux += arr[looping_aux];

        if (looping_aux == arr_size - 1) {
            break;
        }
        
        looping_aux++;
    }

    printf("%d\n", sum_aux);

    free(arr); // Free allocated memory

    return 0;
}
```

---

## **Explanation**
1. **Read `n`**: The number of elements is read from input.
2. **Allocate memory**: `malloc` dynamically allocates an integer array of size `n`.
3. **Read values & compute sum**:
    - A `while` loop reads integers into the array.
    - The sum is computed as values are read.
    - The loop breaks once `n` elements are read.
4. **Print the sum**: The computed sum is printed.
5. **Free allocated memory**: The allocated memory is freed using `free(arr)`.

---

## **Edge Cases Considered**
✅ Smallest input (n = 1)  
✅ Largest input (n = 1000)  
✅ Negative numbers  
✅ Combination of positive and negative numbers

---

## **Complexity Analysis**
- **Time Complexity**: \( O(n) \) (Reading and summing take linear time)
- **Space Complexity**: \( O(n) \) (Dynamically allocated array of size `n`)

This ensures efficient memory usage while providing experience with dynamic memory management in C. 🚀

_[HackerRank challenge](https://www.hackerrank.com/challenges/1d-arrays-in-c/)_
