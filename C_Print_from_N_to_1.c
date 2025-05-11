#include <stdio.h>

void print_n(int n) {
    if(n < 1) {
        return;
    }

    printf("%d", n);

    if(n > 1) {
        printf(" ");
    }
    
    print_n(n - 1);
}


int main () {
    int n;

    scanf("%d", &n);

    print_n(n);

    return 0;
}