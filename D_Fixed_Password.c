#include <stdio.h>

int main () {
    int pass;

    for(;scanf("%d", &pass) != EOF;) {
        if(pass == 1999) {
            printf("Correct");

            break;
        }else {
            printf("Wrong\n");
        }
    }
    return 0;
}