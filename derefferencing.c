#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    printf("%d\n", n);

    int* ptr = &n;

    printf("%p\n", ptr);

    printf("%d\n", *ptr);

    *ptr = 200;

    printf("%d\n", n);


    return 0;
}