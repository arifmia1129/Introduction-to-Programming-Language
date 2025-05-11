#include <stdio.h>

void print_n(int n, int i) {
    if(i > n) {
        return;
    }

    printf("%d\n", i);
    
    print_n(n, i + 1);
}


int main () {
    int n;

    scanf("%d", &n);

    print_n(n, 1);


    return 0;
}