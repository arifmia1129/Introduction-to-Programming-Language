#include <stdio.h>

int sum_tow_nums (int n1, int n2) {
    return n1 + n2;
}

int main () {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int ans = sum_tow_nums(n1, n2);

    printf("%d", ans);
    
    return 0;
}