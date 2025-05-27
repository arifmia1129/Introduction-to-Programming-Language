#include <stdio.h>
#include <stdlib.h>

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

    int b[n + 1];

    for(int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    for(int i = 0; i < n; i++) {
       for(int j = i + 1; j < n; j++) {
        if(b[j] < b[i]) {
            int tmp = b[i];
            b[i] = b[j];
            b[j] = tmp;
        }
       }
    }


    int c[n + 1];

    for(int i = 0; i < n; i++) {
        c[i] = abs(a[i] - b[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");
    }

    return 0;
}