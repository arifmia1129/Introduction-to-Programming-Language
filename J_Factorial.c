// #include <stdio.h>

// void fac(int n, int i, long long int f){

//     if(i > n) {
//         printf("%lld", f);
//         return;
//     }

//     f = f * i;

//     fac(n, i + 1, f);

// }

// int main () {
//     int n;

//     scanf("%d", &n);

//     fac(n, 1, 1);

//     return 0;
// }



#include <stdio.h>

long long int fac(int n){

    if(n == 0) {
        return 1;
    }

    long long fac_ans = fac(n - 1);

    return fac_ans * n;
}

int main () {
    int n;

    scanf("%d", &n);

    long long int fac_ans =  fac(n);

     printf("%lld", fac_ans);

    return 0;
}