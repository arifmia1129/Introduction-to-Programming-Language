// #include <stdio.h>
// #include <string.h>

// int main () {
//     char s1[101 + 101], s2[101];

//     scanf("%s %s", &s1, &s2);

//     int s1_lng = strlen(s1);

//     for(int i = s1_lng, j = 0; s2[j] != '\0'; i++, j++) {
//         s1[i] = s2[j];
//     }

//     printf("%s %s", s1, s2);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main () {
    char s1[101 + 101], s2[101];

    scanf("%s %s", &s1, &s2);

    int s1_lng = strlen(s1);
    int s2_lng = strlen(s2);

    for(int i = 0; i <= s2_lng; i++) {
        s1[i + s1_lng] = s2[i];
    }

    printf("%s %s", s1, s2);
    
    return 0;
}