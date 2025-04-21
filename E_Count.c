#include <stdio.h>
#include <string.h>

int main () {
    char s[1000001];

    scanf("%s", &s);

    int lng = strlen(s);

    int summation = 0;

    for(int i = 0; i < lng; i++) {
        summation += s[i] - 48;
    }

    printf("%d", summation);

    return 0;
}