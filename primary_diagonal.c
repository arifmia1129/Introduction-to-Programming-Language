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

    

    int is_primary_diagonal = 1;

    if(r != c) {
        is_primary_diagonal = 0;
    }

    for(int i = 0; i < r && is_primary_diagonal; i++) {
       
        for(int j = 0; j < c; j++) {
            if(i == j) {
                if(a[i][j] == 0) {
                    is_primary_diagonal = 0;
                    break;
                }
            }else {
               if(a[i][j] != 0) {
                    is_primary_diagonal = 0;
                    break;
                }
            }
        }
    }

    if(is_primary_diagonal) {
        printf("Yes, this is a primary diagonal matrix");
    }else{
        printf("No, this is not a primary diagonal matrix");
    }

    return 0;
}