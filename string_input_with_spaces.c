#include <stdio.h>

int main () {
    char str[50];

    // gets(str);

    fgets(str, 12, stdin);

    printf("%s", str);

    return 0;
}