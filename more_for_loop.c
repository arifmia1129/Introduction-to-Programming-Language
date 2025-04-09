#include<stdio.h>

int main () {

    // 1-100: only print odd numbers
    // for(int i = 1; i <=100; i+=2) {
    //     printf("%d\n", i);
    // }

    // 1-100: only print even numbers
    // for(int i = 2; i <= 100; i+=2) {
    //     printf("%d\n", i);
    // }

    // multiplication of 8
    // for(int i = 8; i <= 100; i+=8) {
    //     printf("%d\n", i);
    // }


    // print 100 - 1 (decrement)
    // for(int i = 100; i >= 1; i--) {
    //     printf("%d\n", i);
    // }

    // step increase with multiplication
    for(int i = 2; i <= 64; i*=2) {

        printf("%d\n",i);

    }


    return 0;
}