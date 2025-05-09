#include <stdio.h>
#include <limits.h>

void print_min_max (int a[], int lng) {
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < lng; i++) {
        if(a[i] > max) {
            max = a[i];
        }

        if(a[i] < min) {
            min = a[i];
        }

    }
    printf("%d %d", min, max);

}

int main () {
    int n;

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    print_min_max(a, n);
    
    return 0;
}