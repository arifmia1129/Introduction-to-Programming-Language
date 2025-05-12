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

    

    int is_secondary_diagonal = 1;

    if(r != c) {
        is_secondary_diagonal = 0;
    }

    for(int i = 0; i < r && is_secondary_diagonal; i++) {
       
        for(int j = 0; j < c; j++) {
            if(i + j == r - 1) {
                if(a[i][j] == 0) {
                    is_secondary_diagonal = 0;
                    break;
                }
            }else {
               if(a[i][j] != 0) {
                    is_secondary_diagonal = 0;
                    break;
                }
            }
        }
    }

    if(is_secondary_diagonal) {
        printf("Yes, this is a secondary diagonal matrix");
    }else{
        printf("No, this is not a secondary diagonal matrix");
    }

    return 0;
}