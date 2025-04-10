// I know that you're loving practice days! So this task is for you. You need to print "I Love Practice" without the quotation marks. I know that you can do it!


// #include<stdio.h>

// int main () {
//     printf("I Love Practice");

//     return 0;
// }


// Take two integers A and B as input and output their summation.

// #include<stdio.h>

// int main () {
//     int A, B;

//     scanf("%d %d", &A, &B);

//     printf("%d", A+B);

//     return 0;
// }


// You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

// #include<stdio.h>

// int main () {
//     int A;
//     long long int B;
//     float C;
//     char D;

//     scanf("%d %lld %f %c", &A, &B, &C, &D);

//     printf("%d\n%lld\n%.2f\n%c", A, B, C, D);

//     return 0;
// }


// I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.

// #include<stdio.h>

// int main() {
//     int N;

//     scanf("%d", &N);

//     for(int i = 1; i <= N ; i++) {
//         printf("I Love Practice\n");
//     }

//     return 0;
// }


// You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.

#include<stdio.h>

int main () {
    int N;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("%d ", i);

        if(i%5 == 0) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}