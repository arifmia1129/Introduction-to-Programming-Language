// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
// #include <stdio.h>

// int main () {

//     int N;

//     scanf("%d", &N);

//     int even_count = 0;

//     for(int i = 1; i <= N; i++) {
//         if(i%2 == 0) {
//             printf("%d\n", i);
//             even_count++;
//         }
//     }

//     if(!even_count) {
//         printf("-1");
//     }
    
//     return 0;
// }


// Given N numbers. Count how many of these values are even, odd, positive and negative.

// #include <stdio.h>

// int main () {

//     int count;

//     scanf("%d", &count);

//     int even_count = 0;
//     int odd_count = 0;
//     int positive_count = 0;
//     int negative_count = 0;

//     for(int i = 1; i <= count; i++) {
//         int N;

//         scanf("%d", &N);

//         if(N % 2 == 0) {
//             even_count++;
//         }else {
//             odd_count++;
//         }

//         if(N > 0) {
//             positive_count++;
//         }else if (N < 0){
//             negative_count++;
//         }
//     }

//     printf("Even: %d\n", even_count);
//     printf("Odd: %d\n", odd_count);
//     printf("Positive: %d\n", positive_count);
//     printf("Negative: %d\n", negative_count);
    
//     return 0;
// }



// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// #include <stdio.h>

// int main () {
//     int got_correct = 0;

//     while(!got_correct) {
//         int N;

//         scanf("%d", &N);

//         if(N == 1999) {
//             printf("Correct");

//             got_correct = 1;
//         }else {
//             printf("Wrong\n");
//         }
//     }
    
//     return 0;
// }


// Given a number N, and N numbers, find maximum number in these N numbers.

#include <stdio.h>

int main () {
    int count;

    scanf("%d", &count);

    int max_num = 0;

    for(int i = 1; i <= count; i++) {
        int N;

        scanf("%d", &N);

        if(N > max_num) {
            max_num = N;
        }
    }

    printf("%d", max_num);
    
    return 0;
}