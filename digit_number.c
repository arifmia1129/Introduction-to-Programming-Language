// #include <stdio.h>

// int main () {

//     char X;

//     scanf("%c", &X);

//     if(X >= 'a' && X <= 'z') {
//         printf("ALPHA\n");
//         printf("IS SMALL");
//     }else if (X >= 'A' && X <= 'Z') {
//         printf("ALPHA\n");
//         printf("IS CAPITAL");
//     }else {
//         int digit = X;
//         if(digit >= 48 && digit <=57) {
//             printf("IS DIGIT");
//         }
//     }
    
//     return 0;
// }


#include <stdio.h>

int main () {

    char input;

    scanf("%c", &input);

    if(input >= 0 && input <= 9) {
        printf("IS DIGIT");
    }else {
        printf("ALPHA\n");

        if(input >= 'a' && input <= 'z') {
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    
    return 0;
}