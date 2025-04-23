// #include <stdio.h>
// #include <stdbool.h>

// int main () {
//     char s1[101], s2[101];

//     scanf("%s %s", &s1, &s2);

//     int i = 0;

//     while(true) {
//         if(s1[i] == '\0' && s2[i] == '\0') {
//             printf("%s", s1);
//             break;
//         }else if(s1[i] == '\0') {
//             printf("%s", s1);
//             break;
//         }else if(s2[i] == '\0') {
//             printf("%s", s2);
//             break;
//         }else if(s1[i] < s2[i]) {
//             printf("%s", s1);
//             break;
//         }else if(s1[i] > s2[i]) {
//             printf("%s", s2);
//             break;
//         }else{
//             i++;
//         }
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main () {
    char s1[101], s2[101];

    scanf("%s %s", &s1, &s2);

    int res = strcmp(s1, s2);

    if(res >= 0) {
        printf("%s", s2);
    }else {
        printf("%s", s1);
    }

    return 0;
}