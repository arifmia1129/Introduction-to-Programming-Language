#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expected_n;

    scanf("%d", &expected_n);

    int got_search = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == expected_n) {
            printf("%d", i);
            got_search++;
            break;
        }
    }

    if(!got_search) {
        printf("-1");
    }

    return 0;
}