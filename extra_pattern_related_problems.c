// You're given N as input. Print the following pattern given in testcases.



// #include <stdio.h>

// int main () {
//     int num;

//     scanf("%d", &num);

//     for(int i = 1; i <= num; i++) {
//         for(int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main () {
    int num;

    scanf("%d", &num);

    for(int i = num; i >= 1; i--) {

        int j = i;

        while(j > 0) {
            printf("%d ", j);
            j--;
        }
        printf("\n");
    }

    return 0;
}