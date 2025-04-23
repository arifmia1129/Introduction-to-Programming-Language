// #include <stdio.h>
// #include <string.h>

// int main () {
//     char s1[11], s2[11];

//     scanf("%s %s", &s1, &s2);

//     int s1_lng = strlen(s1);
//     int s2_lng = strlen(s2);

//     printf("%d %d\n", s1_lng, s2_lng);
//     printf("%s%s\n", s1, s2);

//     char tmp = s1[0];
//     s1[0] = s2[0];
//     s2[0] = tmp;

//     printf("%s %s", s1, s2);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
//     char s1[10 + 11], s2[11];

//     scanf("%s %s", &s1, &s2);

//     int s1_lng = strlen(s1);
//     int s2_lng = strlen(s2);

//     char s1_tmp[11];
//     char s2_tmp[11];

//     for(int i = 0; i <= s1_lng; i++) {
//         s1_tmp[i] = s1[i];
//     }
//     for(int i = 0; i <= s2_lng; i++) {
//         s2_tmp[i] = s2[i];
//     }

//     char s_tmp = s1_tmp[0];

//     s1_tmp[0] = s2_tmp[0];
//     s2_tmp[0] = s_tmp;

//     for(int i = 0; i <= s2_lng; i++) {
//         s1[i + s1_lng] = s2[i];
//     }

//     printf("%d %d\n", s1_lng, s2_lng);
//     printf("%s\n", s1);
//     printf("%s %s", s1_tmp, s2_tmp);
    
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main () {
    char s1[10 + 11], s2[11];

    scanf("%s %s", &s1, &s2);

    int s1_lng = strlen(s1);
    int s2_lng = strlen(s2);

    char s[11];

    strcpy(s, s1);

    strcat(s1, s2);

    char s_tmp = s[0];

    s[0] = s2[0];
    s2[0] = s_tmp;

    printf("%d %d\n", s1_lng, s2_lng);
    printf("%s\n", s1);
    printf("%s %s", s, s2);
    
    return 0;
}