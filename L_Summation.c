#include <stdio.h>

void recursive_fun(int a[], int n, int i, long long int sum) {

    if(n == i) {
        printf("%lld", sum);
        return;
    }

    sum += a[i];
    

    recursive_fun(a, n, i + 1, sum);

}

int main () {
    int n;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    recursive_fun(a, n, 0, 0);
    
    return 0;
}