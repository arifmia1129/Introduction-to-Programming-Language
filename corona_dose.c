#include <stdio.h>

int main() {
    int t;
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
         int D, L, R;
         
         scanf("%d %d %d", &D, &L, &R);
         
         if(D > L && D > R) {
             printf("Too Late\n");
         }else if(D < L && D < L) {
             printf("Too Early\n");
         }else if(D <= R) {
             printf("Take second dose now\n");
         }
    }
    
   
	
    return 0;
}

