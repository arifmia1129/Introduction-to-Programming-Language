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


#include <stdio.h>

int main () {
    int n;
    
    scanf("%d", &n);



    for(int i = 1; i <= n; i++) {
        for(int j = n - 1; j >= i; j--) {
            printf(" ");
        }

        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}