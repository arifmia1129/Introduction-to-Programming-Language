#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;

    scanf("%d", &x);

    int is_possible = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + i; j < n; j++) {
            if(arr[i] + arr[j] == x){
                is_possible = 1;
                printf("YES");
            }
        }
    }

    if(!is_possible) {
        printf("NO");
    }


    
    return 0;
}