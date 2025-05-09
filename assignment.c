#include <stdio.h>

int get_hash2(int is_even, int n) {
    if(!is_even) {
        return n + (n - 1);
    }else {
        return n + (n - 3);
    }
}

int get_space2(int is_even) {

    if(!is_even) {
        return 1;
    }else {
        return 2;
    }
    
}


int main () {
    int n;

    scanf("%d", &n);

    int is_even = 0;

    if(n % 2 == 0) {
        is_even = 1;
    }

    int hash = 1;
    int space = n - 1;
    int hash2 = get_hash2(is_even, n);
    int space2 = get_space2(is_even);

    

    for(int i = 1; i <= n; i++) {
        if(!is_even && i == n) {
            break;
        }
        for(int j = 1; j <= space; j++) {
            printf(" ");
        }
        for(int k = 1; k <= hash; k++) {
            if(i % 2 != 0) {
                printf("#");
            }else {
                printf("-");
            }
        }

        printf("\n");

        hash += 2;
        space--;
    }

    


    for(int i = 1; i <= n; i++) {
        if(is_even && i == n) {
            break;
        }
        for(int j = 1; j < space2; j++) {
            printf(" ");
        }
        for(int k = 1; k <= hash2; k++) {
            if(i % 2 != 0) {
                printf("#");
            }else {
                printf("-");
            }
        }

        printf("\n");

        hash2 -= 2;
        space2++;
    }

    return 0;
}