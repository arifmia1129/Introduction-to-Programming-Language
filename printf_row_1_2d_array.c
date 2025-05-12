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

    // int specified_row;

    // scanf("%d", &specified_row);

    // for(int j = 0; j < c; j++) {
    //         printf("%d ", a[specified_row][j]);
    // }
    // printf("\n");


    int specified_col;

    scanf("%d", &specified_col);

    for(int i = 0; i < r; i++) {
            printf("%d\n", a[i][specified_col]);
    }

    return 0;
}