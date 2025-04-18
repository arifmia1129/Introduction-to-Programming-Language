// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     if(n < 0) {
//         for(int i = n; i <= -1; i++) {
//             printf("%d ", i);
//         }
//     }else{
//         for(int i = 1; i <= n; i++) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int pos_sum = 0;
//     int neg_sum = 0;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > 0) {
//             pos_sum += arr[i];
//         }else {
//             neg_sum += arr[i];
//         }
//     }

//     printf("Positive numbers sum: %d\nNegative numbers sum: %d", pos_sum, neg_sum);

//     return 0;
// }


// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = n - 1; i >= 0; i--) {
//        if(arr[i] % 2 == 0) {
//         printf("%d ", arr[i]);
//        }
//     }

//     return 0;
// }


#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int inx, val;

    scanf("%d %d", &inx, &val);

    arr[inx] = val;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}