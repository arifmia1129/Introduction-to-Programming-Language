#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);
   

    int arr[n];

    for(int i = 0; i < n; i++) {
        int n;
        scanf("%d", &arr[i]);
    }

   int smallest;

   if(arr[0] < 0) {
    smallest = arr[0] * -1;
   }else {
    smallest = arr[0];
   }

    for(int i = 1; i < n; i++) {

        if(arr[i] == 0) {
            smallest = 0;
            break;
        }

        int t;

        if(arr[i] < 0) {
            t = arr[i] * -1;
        }else {
            t = arr[i];
        } 
         if(t < smallest) {
            smallest = t;
        }
    }

    printf("%d", smallest);

    return 0;
}