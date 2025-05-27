#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int total = n + 5 - (n / 2);

    int star = 1;
    int space = total - 1;

    for(int i = 1; i <= total; i++, star += 2, space--) {

        for(int k = 0; k < space; k++) {
            printf(" ");
        }

        for(int j = 0; j < star; j++) {
            printf("*");
        }

        printf("\n");
    }

    for(int i = 1; i <= 5; i++) {

        for(int k = 0; k < total - 1 - n / 2; k++) {
            printf(" ");
        }

        for(int j = 0; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
