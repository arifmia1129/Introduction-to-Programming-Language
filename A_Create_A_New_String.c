#include <stdio.h>
#include <string.h>

int main () {
    char s1[1001], s2[1001];

    scanf("%s %s", &s1, &s2);

    int s1_lng = strlen(s1);
    int s2_lng = strlen(s2);

    printf("%d %d\n", s1_lng, s2_lng);
    printf("%s %s\n", s1, s2);

    return 0;
}