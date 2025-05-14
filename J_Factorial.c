#include <stdio.h>

void fac(int n, int i, long long int f){

    if(i > n) {
        printf("%lld", f);
        return;
    }

    f = f * i;

    fac(n, i + 1, f);

}

int main () {
    int n;

    scanf("%d", &n);

    fac(n, 1, 1);

    return 0;
}