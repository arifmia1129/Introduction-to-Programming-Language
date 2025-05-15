// #include <stdio.h>
// #include <limits.h>

//  void max(int a[], int n , int i, int m){
//     if(i == n) {
//         printf("%d", m);
//         return;
//     }

//     if(a[i] > m) {
//         m = a[i];
//     }
    
//     max(a, n, i + 1, m);
// }

// int main () {
//     int n;

//     scanf("%d", &n);

//     int a[n + 1];

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//       max(a,n, 0, INT_MIN);


//     return 0;
// }


#include <stdio.h>

int max_val (int a[], int n, int idx) {
    if(idx == n - 1) {
        return a[idx];
    }

    int mx_v = max_val(a, n, idx + 1);

    if(a[idx] > mx_v) {
        return a[idx];
    }else {
        return mx_v;
    }
}

int main () {
    int n;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int ans = max_val(a, n, 0);

    printf("%d", ans);

    return 0;
}