// #include <stdio.h>

// int main () {
//     int n;

//     scanf("%d", &n);

//     int arr[n];
//     int max_val = 0;

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > max_val) {
//             max_val = arr[i];
//         }
//     }
    

//     for(int i = 0; i <= max_val; i++) {
//         int count = 0;
//         for(int j = 0; j < n; j++) {
//             if(arr[j] == i) {
//                 count++;
//             }
//         }
//         printf("%d => %d\n", i, count);
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
   
//     int mx_vl = 0;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > mx_vl) {
//             mx_vl = arr[i];
//         }
//     }


//     int fre_arr[mx_vl + 1];


//     for(int i = 0; i < mx_vl; i++) {
//         int count = 0;
//         for(int j = 0; j < n; j++){

//             if(arr[j] == i) {
//                 count++;
//             }

//         }
//         fre_arr[i] = count;
//     }

//     for(int i = 0; i < 10; i++) {
//         printf("%d -> %d\n", i, fre_arr[i]);
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

    int fre_arr[9] = {0};

    for(int i = 0; i < n; i++) {
        fre_arr[arr[i]]++;
    }

    for(int i = 0; i < 9; i++) {
        printf("%d -> %d\n", i, fre_arr[i]);
    }

    return 0;
}