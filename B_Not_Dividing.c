#include <stdio.h>
#include <limits.h>

int main () {
    int t;

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;

        scanf("%d", &n);

        int a[n + 1];

        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min_num = INT_MAX;


        for(int i = 0; i < n; i++) {
            
            printf("%d ", a[i] + 1);
        }
        printf("\n");

    }
    

    return 0;
}