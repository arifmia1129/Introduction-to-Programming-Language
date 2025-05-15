#include <stdio.h>

int main () {
    int n, k;

    scanf("%d %d", &n, &k);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long int element = 0;
    int count = 0;


    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(count == k) {
            break;
        }
        if(a[i] > 0) {
            element += a[i];
        }
        count++;
    }

    printf("%lld", element);

    return 0;
}