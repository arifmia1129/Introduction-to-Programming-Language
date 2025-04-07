// 1. Take a number from user and check if its a even number or odd number.
// #include <stdio.h>

// int main () {
//     int input_number;

//     scanf("%d", &input_number);

//     if(input_number % 2 == 0) {
//         printf("%d is an even number\n", input_number);
//     }else {
//         printf("%d is an odd number\n", input_number);
//     }

//     return 0;
// }

// 2. Take a number from user and check if its a positive or negative number.
#include <stdio.h>

int main () {
    int num;

    scanf("%d", &num);

    if(num == 0) {
        printf("%d is a zero.\n", num);
    }else {
        if(num > 0) {
            printf("%d is a positive number\n", num);
        }else {
            printf("%d is a negative number\n", num);
        }
    }

    return 0;
}

// 3. Explain if else ladder.

// Answer: Actually if else ladder starts from if, then we can use multiple else if with that ladder, finally the ladder will be closed when use else
