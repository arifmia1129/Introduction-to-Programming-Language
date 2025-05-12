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

    

    int is_scalar_diagonal = 1;

    if(r != c) {
        is_scalar_diagonal = 0;
    }

    int first_scalar_diagonal_val = a[0][0];

    for(int i = 0; i < r && is_scalar_diagonal; i++) {
       
        for(int j = 0; j < c; j++) {
            if(i == j) {
                if(a[i][j] != first_scalar_diagonal_val) {
                    is_scalar_diagonal = 0;
                    break;
                }
            }else {
               if(a[i][j] != 0) {
                    is_scalar_diagonal = 0;
                    break;
                }
            }
        }
    }

    if(is_scalar_diagonal) {
        printf("Yes, this is a scalar matrix");
    }else{
        printf("No, this is not a scalar matrix");
    }

    return 0;
}