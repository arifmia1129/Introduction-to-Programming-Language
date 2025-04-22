#include <stdio.h>
#include <string.h>

int main () {
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char s[101];

        scanf("%s", &s);

        int lng = strlen(s);

        if(lng <= 10) {
            printf("%s\n", s);
        }else{
            printf("%c%d%c\n", s[0], lng - 2, s[lng-1]);
        }
    }

    return 0;
}