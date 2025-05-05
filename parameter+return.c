#include <stdio.h>

int sum (int num1, int num2) {
    int sum = num1 + num2;

    return sum;
}

int main () {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int res = sum(n1, n2);

    printf("%d", res);
    
    return 0;
}