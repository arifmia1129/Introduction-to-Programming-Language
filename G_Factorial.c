#include <stdio.h>

int main () {
    int T;

    scanf("%d", &T);


    for(int i = 1; i <= T; i++) {
        long long int fac = 1;

        int N;

        scanf("%d", &N);

        for(int j = 1; j <= N; j++) {
            fac *= j;
        }

        printf("%lld\n", fac);
    }

    return 0;
}