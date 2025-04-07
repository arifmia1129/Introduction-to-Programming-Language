#include <stdio.h>

int main () {
    
    int my_money;

    scanf("%d", &my_money);

    if(my_money >= 100) {
        printf("I will eat Burger.\n");
    }else if(my_money >= 50) {
        printf("I will eat Fuchka.\n");
    }else if(my_money >= 20) {
        printf("I will eat Chips.\n");
    }else {
        printf("I won't eat anything.\n");
    }

    return 0;
}