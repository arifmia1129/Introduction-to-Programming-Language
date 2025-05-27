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

    int is_jadu = 1;

     if(r != c) {
        is_jadu = 0;
    }else {
        for(int i = 0; i < r && is_jadu; i++) {
       
        for(int j = 0; j < c; j++) {
           if(i == j) {
                if(a[i][j] != 1) {
                    is_jadu = 0;
                    break;
                }
            }

           if(i + j == r - 1) {
                if(a[i][j] != 1) {
                    is_jadu = 0;
                    break;
                }
            }
            
            if(i != j && i + j != r - 1) {
               if(a[i][j] != 0) {
                    is_jadu = 0;
                    break;
                }
            }
        }
    }
    }

    if(is_jadu) {
        printf("YES");
    }else{
        printf("NO");
    }



    return 0;
}