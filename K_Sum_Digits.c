#include <stdio.h>
#include <string.h>

int main () {
    int n;
    
    scanf("%d", &n);
    char s[n + 1];

    scanf("%s", &s);

    int lng = strlen(s);


    int sum = 0;

    for(int i = 0; i < lng; i++) {
        sum += s[i] - 48;
    }

    printf("%d", sum);

    return 0;
}