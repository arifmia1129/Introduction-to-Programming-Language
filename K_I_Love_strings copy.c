#include <stdio.h>
#include <string.h>

int main () {
    int n; 
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char s[101], t[101];

        scanf("%s %s", &s, &t);
    
        int s_lng = strlen(s);
        int t_lng = strlen(t);
    
        int mx_lng;
    
        if(s_lng > t_lng) {
            mx_lng = s_lng;
        }else{
            mx_lng = t_lng;
        }


        char res[300] = {'\0'};

    
        for(int i = 0, j = 0; j < mx_lng; j++) {
            if(s[j] != '\0' && s_lng > j) {
                if(s[j] >= 'a' && s[j] <= 'z' && t_lng < j ) {
                    res[i] = s[j] - 32;
                }else {
                    res[i] = s[j];
                }
                i++;
            } if(t[j] != '\0' && t_lng > j){
                res[i] = t[j];
                i++;
            }
        }
       
        printf("%s\n", res);
        
    
    }

    

    return 0;
}