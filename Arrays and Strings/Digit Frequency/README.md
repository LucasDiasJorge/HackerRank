### Frequency of Digits in a String

---

## Problem Statement

Given a string consisting of alphabets and digits, you are required to find the frequency of each digit (from `0` to `9`) in the given string.

### Input Format

- The first and only line of input contains a string `num` which consists of alphabets and digits.

### Constraints

- The string may contain both English alphabets and digits.

### Output Format

- Print ten space-separated integers in a single line, where each integer represents the frequency of digits from `0` to `9` in the string.

### Sample Input 0:
```
a11472o5t6
```

### Sample Output 0:
```
0 2 1 0 1 1 1 1 0 0 
```

#### Explanation 0:

In the given string:

- `1` occurs two times.
- `4`, `7`, `2`, `5`, and `6` occur one time each.
- The digits `0`, `3`, `8`, and `9` do not occur.

### Sample Input 1:
```
lw4n88j12n1
```

### Sample Output 1:
```
0 2 1 0 1 0 0 0 2 0
```

### Sample Input 2:
```
1v88886l256338ar0ekk
```

### Sample Output 2:
```
1 1 1 2 0 1 2 0 5 0
```

---

## Solution Explanation

Here’s the solution you provided with some detailed explanations:

```c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

struct digit {
  int frequency;
} typedef digit;

void init_digit_frequency(digit digits[]) {
  for (int i = 0; i < 10; i++) {
      digits[i].frequency = 0; // Initialize all frequencies to 0
  }
}

void display_digit_frequency(const digit digits[]) {
  for (int i = 0; i < 10; i++) {
      printf("%d ", digits[i].frequency); // Print frequencies of digits 0-9
  }
}

void load_digit_frequencies(digit digits[], const char *str) {
  char* ptr = str;

  while (*ptr != '\0') {
    if (isdigit(*ptr)) { // Check if the character is a digit
      int digit_val = *ptr - '0';  // Convert the character to its corresponding integer value
      digits[digit_val].frequency += 1; // Increment the frequency of the digit
    }

    ptr++;  // Move to the next character in the string
  }
}

int main() {
  char str[MAX_LEN];
  scanf("%s", str);  // Read the input string

  digit digits[10];  // Array to store frequencies of digits 0-9

  init_digit_frequency(digits);  // Initialize the frequencies to 0

  load_digit_frequencies(digits, str);  // Update frequencies based on the input string

  display_digit_frequency(digits);  // Display the frequencies

  return 0;
}
```

### Explanation of Key Parts:
1. **Data Structure:**
    - A `struct digit` is used to hold the frequency of each digit. The `digits` array will hold 10 such structures, one for each digit from `0` to `9`.

2. **Functions:**
    - `init_digit_frequency(digits[])`: Initializes the frequencies of digits to 0.
    - `load_digit_frequencies(digits[], const char *str)`: Loops through each character of the string and increments the corresponding digit's frequency if the character is a digit.
    - `display_digit_frequency(const digit digits[])`: Prints the frequencies of digits from `0` to `9` in a space-separated format.

---

### Difference Between `atoi()` and `*ptr - '0'`

Now, let’s explain the difference between using `atoi()` and the expression `*ptr - '0'`.

1. **`atoi()` Function**:
    - `atoi()` is a function that converts a **string** (a sequence of characters) into an integer. It’s typically used when you need to convert a whole number represented by a string, like `"123"`, into the integer `123`.
    - Example:
      ```c
      char num_str[] = "7";
      int num = atoi(num_str);  // Converts the string "7" to the integer 7
      ```

    - However, `atoi()` is **not efficient** for converting a single digit character. It processes the entire string, which adds unnecessary overhead when you are dealing with a single character. Furthermore, `atoi()` assumes the input is a valid string representing a number and handles larger numbers, so it’s an overkill for simply converting `'0'` to `0`, `'1'` to `1`, etc.

2. **`*ptr - '0'` Expression**:
    - This approach is **more direct** and efficient for converting a **single character** that represents a digit to its integer value.
    - When you subtract `'0'` (the ASCII value of the character `'0'`) from a digit character like `'5'`, you get the integer `5`. This works because in the ASCII table, digits are arranged consecutively: `'0'` has the value 48, `'1'` has the value 49, and so on.
    - Example:
      ```c
      char c = '7';
      int digit = c - '0';  // Converts the character '7' to the integer 7
      ```

    - This method is **more efficient** when working with single digit characters because it directly maps a character to its corresponding integer value without needing additional functions or checks.

### Summary of Differences:
- **Use Case**: `atoi()` is designed to handle entire strings that represent numbers, while `*ptr - '0'` is optimized for converting individual digit characters (like `'1'`, `'2'`, etc.) to integers.
- **Efficiency**: `*ptr - '0'` is more efficient for handling single digits as it directly works on the character’s ASCII value.
- **Complexity**: `atoi()` is more general and handles larger strings and numbers, but it’s unnecessary for single characters, which is why `*ptr - '0'` is preferred in this specific case.

In conclusion, when you need to extract a digit from a single character (like `'7'`), `*ptr - '0'` is the better approach for efficiency and simplicity.

_[HackerRank challenge](https://www.hackerrank.com/challenges/frequency-of-digits-1)_
