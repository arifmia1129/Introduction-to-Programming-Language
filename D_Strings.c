#include <stdio.h>
#include <string.h>

int main () {
    char s1[11], s2[11];

    scanf("%s %s", &s1, &s2);

    int s1_lng = strlen(s1);
    int s2_lng = strlen(s2);

    printf("%d %d\n", s1_lng, s2_lng);
    printf("%s%s\n", s1, s2);

    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;

    printf("%s %s", s1, s2);

    return 0;
}