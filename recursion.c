#include <stdio.h>

void recursive_fun(int num) {
    
    if(num > 5) {
        return;
    }

    
    recursive_fun(num + 1);
    printf("%d\n", num);
}

int main () {
    int i = 1;
    
    recursive_fun(i);

    return 0;
}