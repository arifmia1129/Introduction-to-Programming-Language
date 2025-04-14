// #include <stdio.h>

// int main () {

//     int X;
//     long long int Y;

//     scanf("%d %lld", &X, &Y);

//     printf("%d + %lld = %d\n", X, Y, X + Y);
//     printf("%d * %lld = %lld\n", X, Y, X * Y);
//     printf("%d - %lld = %d\n", X, Y, X - Y);
    
    
//     return 0;
// }


#include <stdio.h>

int main () {
    long long int A, B, C, D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    printf("Difference = %lld", (A * B) - (C * D));

    
    return 0;
}