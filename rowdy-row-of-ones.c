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

    int max_1_contains_row = 0;
    int nums_of_1 = 0;

    for(int i = 0; i < r; i++) {
        int num_1 = 0;
        for(int j = 0; j < c; j++) {
           if(a[i][j] == 1) {
                num_1++;
           }
        }

        if(num_1 > nums_of_1) {
            nums_of_1 = num_1;
            max_1_contains_row = i;
        }
    }

    printf("%d", max_1_contains_row);

    return 0;
}