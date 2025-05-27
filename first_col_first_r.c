#include <stdio.h>
#include <stdlib.h>


int main () {
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r + 1][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = r - 1; i >= 0; i--) {
        for(int j = 0; j < c; j++) {
            if(i != r - 1) {
                break;
            }
            printf("%d ", a[i][j]);

            if(j == c -1) {
                printf("\n");

            }
        }
        for(int j = c - 1; j >= 0; j--) {
            if(j != c - 1) {
                break;
            }
            printf("%d ", a[abs(i - r + 1)][j]);
        }
    }


    return 0;
}