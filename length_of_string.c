// #include <stdio.h>

// int main () {

//     char s[101];

//     scanf("%s", &s);

//     int total_length = 0;

//     for(int i = 0; i <= 101; i++) {
//         if(s[i] == '\0') {
//             break;
//         }else {
//             total_length++;
//         }
//     }

//     printf("%d", total_length);
    
//     return 0;
// }


#include <stdio.h>

int main () {
    char s[101];

    scanf("%s", s);

    int count = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}