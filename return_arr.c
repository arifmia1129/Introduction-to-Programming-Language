#include <stdio.h>

int fun (int a[]) {
    a[1] = 100;
    return a;
}

int main () {
    int a[5] = {1, 2, 3, 4, 5};

    int ans = fun(a);

    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}