#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int is_palindrome = 1;

    for(int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp;

        if(arr[i] != arr[j]) {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome) {
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}