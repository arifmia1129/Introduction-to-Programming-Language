#include <stdio.h>

int test (int* x) {
    *x = 20;
}

int main () {
    int x; 

    scanf("%d", &x);

    test(&x);

    printf("%d", x);
    
    return 0;
}