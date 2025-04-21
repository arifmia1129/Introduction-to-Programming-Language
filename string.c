#include <stdio.h>

int main () {
    char name[4];

    for(int i = 0; i < 4; i++) {
        scanf("%c", &name[i]);
    }

    for(int i = 0; i < 4; i++) {
        printf("%c ", name[i]);
    }

    return 0;
}