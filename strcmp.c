#include <stdio.h>
#include <string.h>

int main () {
    char s1[101], s2[101];

    scanf("%s %s", &s1, &s2);

    int res = strcmp(s1, s2);

    if(res == 0) {
        printf("Equal");
    }else if(res < 0) {
        printf("%s is smaller", s1);
    }else if (res > 0) {
        printf("%s is smaller", s2);
    }

    return 0;
}