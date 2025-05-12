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

    int search_val;

    scanf("%d", &search_val);

    int is_exist = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
           if(a[i][j] == search_val) {
            is_exist = 1;
            break;
           }
        }
    }

    if(is_exist) {
        printf("will not take number");
    }else{
        printf("will take number");
    }

    return 0;
}