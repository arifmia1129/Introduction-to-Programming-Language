// #include <stdio.h>
// #include <string.h>

// void digit_separate_by_space (char s[], int i) {
    
//     int lng = strlen(s);

//     if(i == lng) {
//         return;
//     }
//     printf("%c ", s[i]);

//     digit_separate_by_space(s, i + 1);

// }

// int main () {
//    int n;

//    scanf("%d", &n);

//    for(int i = 0; i < n; i++) {
//     char s[1000001];

//     scanf("%s", s);

//     digit_separate_by_space(s, 0);

//     printf("\n");
//    }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

void digit_separate_by_space (int i) {
    

    if(i == 0) {
        return;
    }

    int last = i % 10;

    digit_separate_by_space(i / 10);

    printf("%d ", last);
}

int main () {
   int n;

   scanf("%d", &n);

   for(int i = 0; i < n; i++) {
    int i;

    scanf("%d", &i);

    if(i == 0) {
        printf("0");
    }

    digit_separate_by_space(i);
    
    printf("\n");
   }

    return 0;
}