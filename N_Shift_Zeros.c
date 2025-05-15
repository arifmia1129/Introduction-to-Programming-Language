#include <stdio.h>

int arr_shift(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j] && a[i] == 0) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main () {
    int n;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    arr_shift(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d" , a[i]);

        if(i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}