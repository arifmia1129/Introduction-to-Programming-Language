#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1 = 10;

    float x = 2.5;

    char section = 'A';

    bool is_okay = false;


    printf("Integer number: %d\n", num1);
    printf("Floating point number: %.2f\n", x);
    printf("Character: %c\n", section);
    
    printf("is okay: %d", is_okay);

    return 0;
}