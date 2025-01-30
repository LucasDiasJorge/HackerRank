# Integer and Float Operations in C

## Objective

This project will help you understand basic arithmetic operations using `int` and `float` data types in C.

## Explanation

### **Fundamental Data Types**
In C, the fundamental data types include `int`, `float`, and `char`.  
Today, we'll focus on `int` and `float` for arithmetic operations.

### **Using `printf()` and `scanf()`**
- **`printf()`**: Prints formatted output to the console.
  ```c
  printf("format_string", argument_list);
  ```
- **`scanf()`**: Reads input from the console.
  ```c
  scanf("format_string", argument_list);
  ```
- Format specifiers:
    - `%d` → Integer
    - `%f` → Float
    - `%c` → Character
    - `%s` → String

### **Example of Taking Input**
To read two integers and two floats:
```c
int a, b;
float x, y;
scanf("%d %d", &a, &b);   // Read two integers
scanf("%f %f", &x, &y);   // Read two floats
```

---

## Task

1. Read two integers.
2. Read two floating-point numbers.
3. Compute:
    - Sum and difference of integers.
    - Sum and difference of floats (rounded to **one decimal place**).
4. Print the results.

---

## Input Format

1. The first line contains **two integers**.
2. The second line contains **two floating-point numbers**.

### **Constraints**
- Integer values: \( -10^3 \leq a, b \leq 10^3 \)
- Float values: \( -10^3.0 \leq x, y \leq 10^3.0 \)

---

## Output Format

- Print the sum and difference of the integers **separated by a space** on the first line.
- Print the sum and difference of the floats **rounded to one decimal place**, separated by a space, on the second line.

---

## Example

### **Input:**
```
10 4
4.0 2.0
```

### **Output:**
```
14 6
6.0 2.0
```

### **Explanation:**
- **Integers:** \( 10 + 4 = 14 \), \( 10 - 4 = 6 \)
- **Floats:** \( 4.0 + 2.0 = 6.0 \), \( 4.0 - 2.0 = 2.0 \)

---

## Implementation

```c
#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Read input
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    // Print integer sum and difference
    printf("%d %d\n", (a + b), (a - b));

    // Print float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", (x + y), (x - y));

    return 0;
}
```

This project will enhance your understanding of basic arithmetic operations and formatted output in C! 🚀

_[HackerRank challenge](https://www.hackerrank.com/challenges/sum-numbers-c/)_
