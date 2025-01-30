# Character, String, and Sentence Input in C

## Objective

This project will help you learn how to take a character, a string, and a sentence as input in C.

## Explanation

### Taking Character Input
To read a single character in C, use:

```c
char ch;
scanf("%c", &ch);
printf("%c", ch);
```

### Taking String Input
To read a word (without spaces), use:

```c
char s[100]; // Define a char array
scanf("%s", s);
printf("%s", s);
```

### Taking Sentence Input
To read an entire sentence (including spaces), use:

```c
char sentence[100]; // Define a char array
scanf(" %[^\n]%*c", sentence); // Read until newline
printf("%s", sentence);
```

**Note:**
- `scanf("%[^\n]%*c", s);` reads input until a newline is encountered.
- The `%*c` discards the newline character.
- To avoid issues with `scanf` reading a leftover newline, use `scanf("\n");` before this statement.

---

## Task

1. Read a single character.
2. Read a single word.
3. Read a full sentence.
4. Print them in the same order.

---

## Input Format

1. A single character.
2. A word (string without spaces).
3. A sentence (string with spaces).

**Constraints:**
- The word and sentence will have fewer than 100 characters.

---

## Output Format

- Print the character on the first line.
- Print the word on the second line.
- Print the sentence on the third line.

---

## Example

### **Input:**

```
C
Language
Welcome To C!!
```

### **Output:**

```
C
Language
Welcome To C!!
```

---

## Implementation

```c
#include <stdio.h>

int main() {
    char ch;
    char word[100];
    char sentence[100];

    // Read inputs
    scanf("%c", &ch);        // Read single character
    scanf("%s", word);       // Read single word
    scanf(" %[^\n]%*c", sentence); // Read sentence

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sentence);

    return 0;
}
```

This project will help you understand basic input handling in C. 🚀

_[HackerRank challenge](https://www.hackerrank.com/challenges/playing-with-characters/)_