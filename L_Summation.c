#include <stdio.h>

long long int cal_sum(int a[], int n, int i) {

    if(n == i) {
        return 0;
    }

   long long int sum = cal_sum(a, n, i + 1);
    

   return sum + a[i];

}

int main () {
    int n;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   long long sum = cal_sum(a, n, 0);

   printf("%lld", sum);
    
    return 0;
}