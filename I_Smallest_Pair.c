#include <stdio.h>
#include <limits.h>

int main () {
    int t;

    scanf("%d", &t);


    for(int i = 0; i < t; i++) {
        int n; 

        scanf("%d", &n);

        int arr[n]; 

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int smallest_sum = INT_MAX;

        for(int i = 1; i < n; i++) {
            for(int j = i + 1; j <= n; j++) {
                int tmp_sum = arr[i - 1] + arr[j - 1] + j - i;

                if(tmp_sum < smallest_sum) {
                    smallest_sum = tmp_sum;
                }
            }
        }

        printf("%d\n", smallest_sum);
    }

    return 0;
}