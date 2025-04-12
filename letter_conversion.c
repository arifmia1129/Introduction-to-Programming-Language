#include <stdio.h>

int main () {

    char input;

    scanf("%c", &input);

    if(input >= 'a' && input <= 'z') {
        printf("%c", input - 32);
    }else {
        printf("%c", input + 32);
    }
    
    return 0;
}