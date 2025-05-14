#include <stdio.h>

int main () {
    int r = 5, c = 5;

    int a[r ][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", a[i][j]);
        }
    }



    return 0;
}