#include <stdio.h>

int main () {
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int fre_arr[100001] = {0};


    for(int i = 0; i <= n; i++) {

        if(i == n) {
            break;
        }

        fre_arr[arr[i]]++;
    }

    for(int i = 1; i <= m; i++) {
        printf("%d\n", fre_arr[i]);
    }

  
    return 0;
}