#include <stdio.h>
#include <stdlib.h>

int main () {
    int r = 5, c = 5;

    int a[r ][c];

    int mid_r = 3, mid_col = 3, current_r, current_c;

    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 1) {
                current_r = i;
                current_c = j;
            }

        }
    }

    int res = abs(mid_r - current_r) + abs(mid_col - current_c);

    printf("%d", res);

    return 0;
}