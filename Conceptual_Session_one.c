#include<stdio.h>

// int main () {
//     long long int a, b;

//     scanf("%lld %lld", &a, &b);

//     long long int mul = a * b;

//     printf("%lld\n", mul);
// return 0;
// }


// int main () {
//     int a, b;

//     scanf("%d %d", &a, &b);

//    long long int mul = (long long int) a * b;

//     printf("%lld\n", mul);
// return 0;
// }


// int main () {
//    int num;

//    scanf("%d", &num);

//    if(num == 0) {
//     printf("Falsy value");
//    }else {
//     printf("Truthy value");
//    }
// return 0;
// }


// is it positive or negative
// int main () {
//     int num;

//     scanf("%d",&num);

//     if(num < 0) {
//         printf("Negative number.\n");
//     }else {
//         printf("Positive number.\n");
//     }

// return 0;


// }


// grade of students based on their score

// int main () {
//     int score;

//     scanf("%d", &score);

//     if(score > 100) {
//         printf("Invalid score. Max score should be 100");
//     }else if(score >= 90) {
//         printf("A");
//     }else if(score >= 80) {
//         printf("B");
//     }else if(score >= 70) {
//         printf("C");
//     }else if(score >= 60) {
//         printf("B");
//     }else {
//         printf("F");
//     }
    // return 0;

// }


// first check even or odd, if even then check is it divisible by 4

int main () {
    int num;

    scanf("%d", &num);

    if(num%2 == 0) {
        if(num%4 == 0) {
            printf("Yes. Got it: %d", num);
        }else{
            printf("Even number but not divisible by 4");
        }
    }else {
        printf("Odd number");
    }

    return 0;
}