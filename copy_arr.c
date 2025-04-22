#include <stdio.h>

int main () {
    int arr1_lng;

    scanf("%d", &arr1_lng);
    
    int arr1[arr1_lng];

    for(int i = 0; i < arr1_lng; i++) {
        scanf("%d", &arr1[i]);
    }

    int arr2_lng;

    scanf("%d", &arr2_lng);

    int arr2[arr2_lng];

    for(int i = 0; i < arr2_lng; i++) {
        scanf("%d", &arr2[i]);
    }

    int final_arr[arr1_lng + arr2_lng];

    for(int i = 0; i < arr1_lng + arr2_lng; i++) {
        if(i < arr1_lng) {
            final_arr[i] = arr1[i];
        }else{
            final_arr[i] = arr2[i - arr1_lng];
        }
    }

    for(int i = 0; i < arr1_lng + arr2_lng; i++) {
        printf("%d ", final_arr[i]);
    }
    
    return 0;
}