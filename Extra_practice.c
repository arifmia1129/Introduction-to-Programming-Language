// #include <stdio.h>
// #include <stdlib.h>

// void my_abs(int num) {
//     printf("%d", abs(num));
// }

// int main () {
//     int n;

//     scanf("%d", &n);

//     my_abs(n);
    
//     return 0;
// }


// #include <stdio.h>

// void my_len(char s[], int* count) {

//     int lng = 0;

//     for(int i= 0; s[i] != '\0'; i++) {
//         lng++;
//     }

//     *count = lng;
// }

// int main () {
//     char s[1000001];

//     scanf("%s", s);

//     int count = 0;

//     my_len(s, &count);

//     printf("%d", count);

    
//     return 0;
// }


// #include <stdio.h>

// void count_odd(int a[], int lng, int* odd_count) {

//     int odd_lng = 0;

//     for(int i= 0; i < lng; i++) {
//         if(a[i] % 2 != 0) {
//             odd_lng++;
//         }
//     }

//     *odd_count = odd_lng;
// }

// int main () {
//     int n; 

//     scanf("%d", &n);

//     int a[n];

//    for(int i = 0; i < n; i++) {
//     scanf("%d", &a[i]);
//    }

//    int odd_count = 0;


//    count_odd(a, n, &odd_count);

//    printf("%d", odd_count);

    
//     return 0;
// }


// #include <stdio.h>

// void change_it(int a[], int lng) {

//     a[lng - 1] = 100;
    
// }

// int main () {
//     int n; 

//     scanf("%d", &n);

//     int a[n];

//    for(int i = 0; i < n; i++) {
//     scanf("%d", &a[i]);
//    }

//    change_it(a, n);

//    for(int i = 0; i < n; i++) {
//     printf("%d ", a[i]);
//    }

    
//     return 0;
// }


#include <stdio.h>

void swap_it(int* n1, int* n2, int n1_val, int n2_val) {


    *n2 = n1_val;

    *n1 = n2_val;
    
}

int main () {
    int n1, n2; 

    scanf("%d %d ", &n1, &n2);

   swap_it(&n1, &n2, n1, n2);

   printf("%d %d", n1, n2);
    
    return 0;
}