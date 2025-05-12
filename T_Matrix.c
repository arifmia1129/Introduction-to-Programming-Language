#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;

    scanf("%d", &n);

    int r = n;
    int c = n;

    int a[r + 1][c + 1];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;

    for(int i = 0; i < r; i++) {
       
        for(int j = 0; j < c; j++) {
            if(i == j) {
                primary_diagonal_sum += a[i][j];
                
            }

            if(i + j == r - 1) {
                 secondary_diagonal_sum += a[i][j];
            }
        }
    }

    printf("%d", abs(primary_diagonal_sum - secondary_diagonal_sum));

    

    return 0;
}