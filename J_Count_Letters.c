#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main () {
    char *s = malloc(10000001); 
    scanf("%s", s);

    int fre[27] = {0};


    for(int i = 0; s[i] != '\0'; i++) {
        fre[s[i] - 97]++;
    }

    for(int i = 0; i < 26; i++) {
        if(fre[i] != 0) {
            printf("%c : %d\n", i + 97, fre[i]);
        }
    }

    return 0;
}