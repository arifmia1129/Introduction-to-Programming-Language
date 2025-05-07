#include <stdio.h>

void testFun (int x) {
    x = 20;
    printf("Address of X from main function: %p\n", &x);
}

int main () {
    int x = 10;

    printf("Address of X from main function: %p\n", &x);

    testFun(x);

    return 0;
}