#include <stdio.h>

void reverse_arr(int a[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
}

int main () {
    int a[5] = {10, 20, 30, 40, 50};

    reverse_arr(a, 5);
    
    return 0;
}