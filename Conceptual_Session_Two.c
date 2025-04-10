// #include<stdio.h>

// int main () {
//     int num;

//     scanf("%d", &num);

//     while(num != 0) {
//         printf("%d\n", num);

//         num/=2;
//     }

//     return;
// }


// 1. Number from 1 to N divisible by 3 and 7

// int main () {
//     int num;

//     scanf("%d", &num);

//     int count = 0;

//     for(int i = 1; i <= num; i++) {
        
//         if(i%3 == 0 && i%7 == 0) {
//             count++;
//         }

//     }

//     printf("%d\n", count);
// }



// Given a number N. Print all the divisors of N in ascending order.

// #include<stdio.h>

// int main () {
//     int N;

//     scanf("%d", &N);

//     for(int i = 1; i <= N; i++) {
//         if(N%i == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }


// Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

// #include<stdio.h>

// int main () {
//     int T;

//     scanf("%d", &T);

//     for(int tc = 1; tc <= T; tc++) {
//         int X, Y;

//     scanf("%d %d", &X, &Y);

//     if(X > Y) {
//         int T = X;

//         X = Y;
//         Y = T;
//     }

//     int sum = 0;

//     for(int i = X + 1; i < Y; i++) {
//         if(i%2 != 0) {
//             sum+=i;
//         }
//     }

//     printf("%d\n", sum);
//     }


//     return 0;
// }

// Given a number N. Print the factorial of number N.

#include<stdio.h>

int main () {
    int T;

    scanf("%d", &T);

    for(int tc = 1; tc <= T; tc++) {
        int N;

    scanf("%d", &N);

    long long int fac = 1;

    for(int i = 1; i <= N; i++) {
        fac*= (long long int)i;
    }

    printf("%lld\n", fac);
    }

    return 0;
}