// #include <stdio.h>

// int summation_first_last_digit (int n) {
//     int first_digit = n / 1000;
//     int last_digit = n % 10;

//     return first_digit + last_digit;
// }

// int main () {
//     int n;

//     scanf("%d", &n);

//     int ans = summation_first_last_digit(n);

//     printf("%d", ans);
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// void printing_n_values (int N) {
//     if(N < 0) {
//         int abs_val = abs(N);
//         for(int i = N; i <= abs_val; i++) {
//             printf("%d ", i);
//         }
//     }else {
//         for(int i = N; i >= -N; i--) {
//             printf("%d ", i);
//         }
//     }
// }

// int main () {
//     int n;

//     scanf("%d", &n);

//     printing_n_values(n);
    
//     return 0;
// }


#include <stdio.h>

void print_star (int n) {
    for(int i = 1; i <= n; i++) {
        printf("*");
    }
}

void print_space (int n) {
    for(int i = 1; i <= n; i++) {
        printf(" ");
    }
}

int main () {

    int n;

    scanf("%d", &n);

    int star = n * 2 - 1;
    int space = 0;

    for(int i = 1; i <= n; i++) {
        print_space(space);
        print_star(star);

        printf("\n");
        star -= 2;
        space++;
    }
    
    return 0;
}