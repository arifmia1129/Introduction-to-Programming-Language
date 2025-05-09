#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 4;
    
    // scanf("%d", &n);
    
    float cal_avg = 1;

    if(n > 1) {
        cal_avg  =(int) ceil((float)n / 2);
    }

    int avg = (int) cal_avg;

    
    int hash1 = 1;
    int dot1 = 3;
    int hash_space1 = n - 1;
    int dot_space1 = n - 2;

    for(int i = 1; i <= avg; i++) {
        for(int s = 1; s <= hash_space1; s++) {
            printf(" ");
        }
        for(int j = 1; j <= hash1; j++) {
            printf("#");
        }
        
        printf("\n");
        for(int s = 1; s <= dot_space1; s++) {
            printf(" ");
        }
        for(int k = 1; k <= dot1 && i != avg; k++) {
            printf("-");
        }

        if(i != avg) {
            printf("\n");
        }
        dot_space1 -= 2;
        hash_space1 -= 2;
        hash1 += 4;
        dot1 += 4;
    }

    int hash2 = n + 1;
    int dot2 =  n + avg + 1;
    int hash_space2 = 1;
    int dot_space2 = 0;


    for(int i = 1; i <= avg; i++) {
        for(int s = 1; s <= dot_space2; s++) {
            printf(" ");
        }
        for(int k = 1; k <= dot2; k++) {
            printf("-");
        }
        printf("\n");
        for(int s = 1; s <= hash_space2; s++) {
            printf(" ");
        }
        for(int j = 1; j <= hash2; j++) {
            printf("#");
        }
        
        
        dot_space2 += 2;
        hash_space2 += 2;
        printf("\n");
        hash2 -= 4;
        dot2 -= 4;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


