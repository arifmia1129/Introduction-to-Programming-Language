#include <stdio.h>

int main () {
    int n, k;

    scanf("%d %d", &n, &k);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    int count = 0;

    int i = 0, j = n - 1;
    while(i < j) {
        if(a[i] + a[j] <= k) {
            printf("%d %d\n", i, j);
            count++;
            i++;
            j--;
        } else {
            j--;
        }
    }


    printf("%d", count);

    return 0;
}