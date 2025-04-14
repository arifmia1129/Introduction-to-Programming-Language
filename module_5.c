// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
#include <stdio.h>

int main () {

    int N;

    scanf("%d", &N);

    int even_count = 0;

    for(int i = 1; i <= N; i++) {
        if(i%2 == 0) {
            printf("%d\n", i);
            even_count++;
        }
    }

    if(!even_count) {
        printf("-1");
    }
    
    return 0;
}
