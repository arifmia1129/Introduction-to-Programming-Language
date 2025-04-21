#include <stdio.h>
#include <string.h>

int main () {
    char s[20];

    scanf("%s", &s);

    int lng = strlen(s);

    printf("%d", lng);

    return 0;
}