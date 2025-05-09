#include <stdio.h>

int main () {
    int a[3];
  

    for(int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    int n[3];
    for(int i = 0; i < 3; i++) {
        n[i] = a[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(n[j] < n[i]) {
                int tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("%d\n", n[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}

// 2 0 -1
// 0 2 -1
