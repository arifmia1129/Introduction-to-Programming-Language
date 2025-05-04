// problem 1

// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         for(int k = n - 1; k >= i; k--) {
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// problem 2

// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++) {
//         for(int k = n - 1; k >= i; k--) {
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// problem 3

// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int space = 1;

//     for(int i = n; i >= 1; i--) {
//         for(int k = 1; k < space; k++) {
//             printf(" ");
//         }
//         for(int j = i; j >= 1; j--) {
//             printf("*");
//         }
//         printf("\n");
//         space++;
//     }
//     return 0;
// }


// problem 4
// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int star = n + (n - 1);
//     int space = 1;

//     for(int i = 1; i <= n; i++) {
//         for(int k = 1; k < i; k++) {
//             printf(" ");
//         }
//         for(int j = 1; j <= star; j++) {
//             printf("*");
//         }
//         printf("\n");
//         star -= 2;
//         space--;
//     }

//     return 0;
// }


// problem 5

#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%c ", j + 65);
        }
        printf("\n");
    }

    return 0;
}