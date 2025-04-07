#include <stdio.h>

int main () {

    int money;

    scanf("%d", &money);

    if(money >= 5000) {
        printf("I will go to CoxsBazar.\n");
        
        if(money >= 10000) {
            printf("I will go to Saint Martin also.\n");
        }else {
            printf("I will back from CoxsBazar.\n");
        }
    }else {
        printf("I won't go to anywhere.\n");
    }

    return 0;
}