// #include <stdio.h>

// int main () {
//     int r, c;

//     scanf("%d %d", &r, &c);

//     int a[r + 1][c + 1];

//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     if(r == 1) {
//         printf("This is a row matrix.\n");
//     }

//     if(c == 1) {
//         printf("This is a column matrix.\n");
//     }

//     if(r == c) {
//         printf("This is a square matrix.\n");
//     }

//     return 0;
// }


// checking zero matrix

#include <stdio.h>

int main () {
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r + 1][c + 1];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int is_zero_matrix = 1;

     for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] != 0) {
                is_zero_matrix = 0;
                break;
            }
        }
    }

    if(is_zero_matrix) {
        printf("Yes, this is a zero matrix");
    }else{
        printf("No, this is not a zero matrix");
    }

    return 0;
}