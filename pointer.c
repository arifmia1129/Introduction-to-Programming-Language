#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int* ptr;

    ptr = &n;

    printf("%d\n", n);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    return 0;
}