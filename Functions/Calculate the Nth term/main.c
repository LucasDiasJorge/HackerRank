#include <stdio.h>
#include <stdbool.h>

int find_nth_term_recursive(int n, int a, int b, int c) {

    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    return find_nth_term_recursive(n - 1, b, c, (a+b+c));
}

int find_nth_term(int n, int a, int b, int c) {
    return find_nth_term_recursive(n,a,b,c);
}

int main() {

    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}