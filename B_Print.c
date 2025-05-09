#include <stdio.h>

void print_nums (int num) {
    for(int i = 1; i <= num; i++) {
        printf("%d", i);

        if(i != num) {
            printf(" ");
        }
    }
}

int main () {
    int num;

    scanf("%d", &num);

    print_nums(num);

    return 0;
}