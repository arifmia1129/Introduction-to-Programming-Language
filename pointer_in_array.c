#include <stdio.h>

int main () {
    int a[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        printf("%p\n", &a[i]);
    }

    printf("%p\n", &a);

    *a = 100;
    *(a + 2) = 100;

    for(int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}