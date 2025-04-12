// #include <stdio.h>

// int main () {

//     int num1, num2, num3;

//     scanf("%d %d %d", &num1, &num2, &num3);

//     int max = num1;
//     int min = num1;

//     if(num2 > max && num2 > num3) {
//         max = num2;
//     }else if (num3 > max) {
//         max = num3;
//     }

//     if(num2 < min && num2 < num3) {
//         min = num2;
//     }else if (num3 < min) {
//         min = num3;
//     }



//     printf("%d %d", min, max);
    
//     return 0;
// }

#include <stdio.h>

int main () {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c) {
        printf("%d ", a);
    }else if(b <= a && b <= c) {
        printf("%d ", b);
    }else if(c <= a && c <= a) {
        printf("%d ", c);
    }


    if(a >= b && a >= c) {
        printf("%d ", a);
    }else if(b >= a && b >= c) {
        printf("%d ", b);
    }else if(c >= a && c >= a) {
        printf("%d ", c);
    }
    
    return 0;
}