#include <stdio.h>

int pageCount(int n, int p) {
    int fromFront = p / 2;          // Turns required from the front
    int fromBack = (n / 2) - (p / 2); // Turns required from the back
    return fromFront < fromBack ? fromFront : fromBack;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", pageCount(n, p));
    return 0;
}
