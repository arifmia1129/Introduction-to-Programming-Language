#include <stdio.h>

int main () {

    int X;

    scanf("%d", &X);

    int new_number = X / 1000;


    if(new_number % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    
    return 0;
}