// #include <stdio.h>
// #include <string.h>

// int main () {
//     char s1[101], s2[101];

//     scanf("%s %s", &s1, &s2);

//     int s1_lng = strlen(s1);
//     int s2_lng = strlen(s2);

//     int max_lng;

//     if(s1_lng > s2_lng) {
//         max_lng = s1_lng;
//     }else{
//         max_lng = s2_lng;
//     }

//     int is_s1_large = 0;

//     for(int i = 0; i < max_lng; i++) {
//         if(s1[i] > s2[i]) {
//             is_s1_large = 1;
//             break;
//         }

//         if(s1[i] != '\0' && s2[i] == '\0') {
//             is_s1_large = 1;
//             break;
//         }
//         if(s1[i] == '\0' && s2[i] != '\0') {
//             is_s1_large = 0;
//             break;
//         }
        

        

//     }

//     if(s1_lng == s2_lng && !is_s1_large){
//         printf("Equal");
//     }else if(is_s1_large) {
//         printf("Greater= %s, smaller= %s", s1, s2);
//     }else{
//         printf("Greater= %s, smaller= %s", s2, s1);
//     }

   

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>

int main () {
    char s1[101], s2[101];

    scanf("%s %s", &s1, &s2);

    int i = 0;

    while(true) {
        if(s1[i] == '\0' && s2[i] == '\0') {
            printf("Equal\n");
            break;
        }else if(s1[i] == '\0') {
            printf("%s is small\n", s1);
            break;
        }else if(s2[i] == '\0') {
            printf("%s is small\n", s2);
            break;
        }else if(s1[i] < s2[i]) {
            printf("%s is small\n", s1);
            break;
        }else if (s2[i] < s1[i]) {
            printf("%s is small\n", s2);
            break;
        }else{
            i++;
        }
    }

    return 0;
}