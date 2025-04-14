#include <stdio.h>

int main () {
    int T; 

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int X, Y;

        scanf("%d %d", &X, &Y);

        int sum = 0;

        if(X > Y) {
           int N = X;

            X = Y;

            Y = N;

        }

        for(int j = X + 1; j < Y; j++) {
            if(j % 2 != 0) {
                sum += j;
            }
        }
        printf("%d\n", sum);

    }

    return 0;
}