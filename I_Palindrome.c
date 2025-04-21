#include <stdio.h>
#include <string.h>

int main () {
    char s[1001];

    scanf("%s", &s);

    int lng = strlen(s);

    int is_palindrome = 1;


    for(int i = 0, j = lng - 1; i <= j; i++, j--) {
        if(s[i] != s[j]) {
            is_palindrome = 0;
            printf("NO");
            break;
        }
    }

    if(is_palindrome) {
        printf("YES");
    }


    return 0;
}