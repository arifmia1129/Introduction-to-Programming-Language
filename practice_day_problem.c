// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int star = 1;
//     int space = n - 1;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= space; j++) {
//             printf(" ");
//         }

//         for(int k = 1; k <= star; k++) {
//             printf("*");
//         }

//         printf("\n");
//         star++;
//         space--;
//     }

//     return 0;
// }

// #include <stdio.h>

// int small_to_capital (char c) {
//     printf("%d", c);
// }

// int main () {
//     char c;

//     scanf("%c", &c);

//     small_to_capital(c);
    
//     return 0;
// }


// #include <stdio.h>

// int char_to_ascii (char c) {
//     printf("%c", c - 32);
// }

// int main () {
//     char c;

//     scanf("%c", &c);

//     char_to_ascii(c);
    
//     return 0;
// }


#include <stdio.h>

int capital_to_small (char c) {
    printf("%c", c + 32);
}

int main () {
    char c;

    scanf("%c", &c);

    capital_to_small(c);
    
    return 0;
}