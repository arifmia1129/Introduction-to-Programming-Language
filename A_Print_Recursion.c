#include <stdio.h>

void recursive_fun(int n, int i) {

    if(i > n) {
        return;
    }
    printf("I love Recursion\n");

    recursive_fun(n, i + 1);
}

int main () {
    int n; 

    scanf("%d", &n);

    recursive_fun(n, 1);
    
    return 0;
}