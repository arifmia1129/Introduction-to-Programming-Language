#include <stdio.h>
#include <string.h>

int main () {
    int n; 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char s[51], t[51];

        scanf("%s %s", &s, &t);
    
        int s_lng = strlen(s);
        int t_lng = strlen(t);
    
        int mx_lng;
    
        if(s_lng > t_lng) {
            mx_lng = s_lng;
        }else{
            mx_lng = t_lng;
        }

    
        for(int i = 0; i < mx_lng; i++) {
            if(s[i] != '\0' && s_lng > i) {
                printf("%c", s[i]);
            }
            if(t[i] != '\0' && t_lng > i){
                printf("%c", t[i]);
            }
        }
        printf("\n");
    
    }

    

    return 0;
}