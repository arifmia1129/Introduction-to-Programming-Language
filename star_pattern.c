// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main () {
    int n, star = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        star++;
    }

    return 0;
}