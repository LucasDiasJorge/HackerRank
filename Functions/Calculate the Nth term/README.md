# **Nth Term of a Recurring Series (Recursive Approach)**

## **Description**
This project calculates the *n*-th term of a series where each term is the sum of the previous three terms. The calculation is implemented using recursion in C. The program takes an integer *n* and three initial values (*a, b, c*) as input and outputs the *n*-th term of the sequence.

## **Problem Statement**
Given a series where:
- The first term is `a`
- The second term is `b`
- The third term is `c`
- Each subsequent term is the sum of the previous three terms

You need to determine the *n*-th term using recursion.

### **Recursive Formula**
For *n* ≥ 4:  
`T(n) = T(n-1) + T(n-2) + T(n-3)`

## **Input Format**
- The first line contains a single integer `n` (1 ≤ *n* ≤ 20).
- The second line contains three space-separated integers `a`, `b`, and `c` (1 ≤ *a, b, c* ≤ 100).

## **Output Format**
- Print a single integer: the *n*-th term of the series.

## **Example Usage**

### **Example 1**
#### **Input**
```
5
1 2 3
```
#### **Output**
```
11
```
#### **Explanation**
```
T(1) = 1
T(2) = 2
T(3) = 3
T(4) = 1 + 2 + 3 = 6
T(5) = 2 + 3 + 6 = 11
```

### **Example 2**
#### **Input**
```
10
1 1 1
```
#### **Output**
```
149
```

---

## **Implementation**
The program is implemented in C using a recursive function to compute the *n*-th term.

### **Code**
```c
#include <stdio.h>

// Recursive function to calculate the n-th term
int find_nth_term_recursive(int n, int a, int b, int c) {
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;
    
    return find_nth_term_recursive(n - 1, b, c, a + b + c);
}

int main() {
    int n, a, b, c;

    // Read input values
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    // Validate constraints
    if (n < 1 || n > 20) {
        return 0;
    }
    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100) {
        return 0;
    }

    // Compute the nth term
    int ans = find_nth_term_recursive(n, a, b, c);

    // Print the result
    printf("%d\n", ans);

    return 0;
}
```

---

## **How to Compile and Run**
### **Compile**
```sh
gcc -o nth_term nth_term.c
```
### **Run**
```sh
./nth_term
```

### **Example Run**
```sh
$ ./nth_term
5
1 2 3
11
```

---

## **Complexity Analysis**
- **Time Complexity:** *O(n)* (each recursive call reduces *n* by 1)
- **Space Complexity:** *O(n)* (due to recursive function call stack)

---

_[HackerRank challenge](https://www.hackerrank.com/challenges/recursion-in-c/)_
