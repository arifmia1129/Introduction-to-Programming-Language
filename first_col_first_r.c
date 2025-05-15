#include <stdio.h>


int main () {
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r + 1][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i > 0) {
                break;
            }
            printf("%d ", a[i][j]);

            if(j == c -1) {
                printf("\n");

            }
        }
        for(int j = 0; j < c; j++) {
            if(j > 0) {
                break;
            }
            printf("%d ", a[i][j]);
        }
    }


    return 0;
}