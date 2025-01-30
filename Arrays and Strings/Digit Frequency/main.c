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
      digits[i].frequency = 0;
  }
}

void display_digit_frequency(const digit digits[]) {
  for (int i = 0; i < 10; i++) {
      printf("%d ", digits[i].frequency);
  }
}

void load_digit_frequencies(digit digits[], const char *str) {

  char* ptr = str;

  while (*ptr != '\0') {

    if (isdigit(*ptr)) {
      int digit = *ptr - '0';  // Convert char to its digit value
      digits[digit].frequency += 1;
    }

    ptr++; // Pointer Arithmetics
  }

}

int main() {

  char str[MAX_LEN];
  scanf("%s", str);

  digit digits[10];

  init_digit_frequency(digits);

  load_digit_frequencies(digits, str);

  display_digit_frequency(digits);

  return 0;
}
