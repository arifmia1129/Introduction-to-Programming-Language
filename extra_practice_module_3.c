// Write a c program to print 8’s time table to 200
// #include<stdio.h>

// int main () {

//     for(int i = 8; i <= 200; i+=8) {
//         printf("%d x %d = %d\n",8, i/8, i);
//     }

//     return 0;
// }


// Write a c program to print all odd number from 100 to 1

// #include<stdio.h>

// int main () {

//     for(int i = 100; i >= 1; i--) {

//         if(i%2 != 0) {
//             printf("%d\n",i);
//         }

//     }

//     return 0;
// }


// In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

// #include <stdio.h>

// int main () {
//     int N;

//     scanf("%d", &N);

//     if(N == 0) {
//         printf("Zero");
//     }else {
//         printf("Non Zero");
//     }
// }


// In this problem you will be given an integer number N. You will have to add 5 with N and print it.

// #include <stdio.h>

// int main () {
//     int N;

//     scanf("%d", &N);
    

//     printf("%d", N + 5);

//     return 0;
// }


// In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a).

// #include<stdio.h>

// int main() {
//     int a, b;

//     scanf("%d %d", &a, &b);

//     if(a%b == 0 || b%a == 0) {
//         printf("Yes");
//     }
//     else {
//         printf("No");
//     }
// }


// In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

#include<stdio.h>

int main () {
    float x;

    scanf("%f", &x);

    printf("%.3f", x);
}



// Write the differences between break and continue

// Answer: If we want to terminate the loop functionality with any condition then we can use break
// On the other hand, if want to skip functionalities/code with any condition then we can use continue


