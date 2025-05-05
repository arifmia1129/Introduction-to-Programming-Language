#include <stdio.h>

int x = 10; //global variable

void print_num () {
    int y = 20; // local variable
    printf("%d\n", x);
    printf("%d\n", y);
}

int main () {
    int z = 30; // local variable

    print_num();

    printf("%d\n", z);
    
    return 0;
}