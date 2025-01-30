#include <stdio.h>

#define MAX_LEN 100

int main()
{

    char ch;
    scanf("%c", &ch);

    char string[MAX_LEN];
    scanf("%s", &string);

    scanf("\n");

    char sentence[MAX_LEN];
    scanf("%[^\n]%*c", &sentence);

    printf("%c\n", ch);
    printf("%s\n", string);
    printf("%s\n", sentence);

    return 0;
}