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

    

    int is_unit_diagonal = 1;

    if(r != c) {
        is_unit_diagonal = 0;
    }

    int unit_diagonal_val = 1;

    for(int i = 0; i < r && is_unit_diagonal; i++) {
       
        for(int j = 0; j < c; j++) {
            if(i == j) {
                if(a[i][j] != unit_diagonal_val) {
                    is_unit_diagonal = 0;
                    break;
                }
            }else {
               if(a[i][j] != 0) {
                    is_unit_diagonal = 0;
                    break;
                }
            }
        }
    }

    if(is_unit_diagonal) {
        printf("Yes, this is a unit matrix");
    }else{
        printf("No, this is not a unit matrix");
    }

    return 0;
}