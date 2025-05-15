#include <stdio.h>

void log_cal(long long int n, long long int i,  long long int count) {

    if(i * 2 > n) {
        printf("%lld", count);
        return;
    }

   log_cal(n, i * 2, count + 1);

}
 
int main () {
    long long int n;

    scanf("%lld", &n);

   
    log_cal(n, 1, 0);

    return 0;
}