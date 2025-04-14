#include <stdio.h>
#include <limits.h>

int main () {
    int count;

    scanf("%d", &count);

    int max_num = INT_MIN;

    for(int i = 1; i <= count; i++) {
        int N;

        scanf("%d", &N);

        if(N > max_num) {
            max_num = N;
        }
    }

    printf("%d", max_num);
    
    return 0;
}