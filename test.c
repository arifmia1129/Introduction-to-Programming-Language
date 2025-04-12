#include <stdio.h>

int main () {

    int total;
    
    scanf("%d", &total);

    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;

    for(int i = 1; i <= total; i++) {
        int N;

        scanf("%d", &N);

        if(N % 2 == 0) {
            even_count++;
        }else {
            odd_count++;
        }

        if(N > 0) {
            positive_count++;
        }else if (N < 0){
            negative_count++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even_count, odd_count, positive_count, negative_count);

}