#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int b[n + 1];

    for(int i = 0; i < n; i++) {
        b[a[i] - 1] = a[i];
    }

    int c[n + 1];

    for(int i = 0; i < n; i++) {
        c[i] = a[i] * b[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}