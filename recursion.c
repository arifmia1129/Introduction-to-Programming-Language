#include <stdio.h>

void recursive_fun(int num) {
    
    if(num > 5) {
        return;
    }

    printf("%d\n", num);

    recursive_fun(num + 1);
}

int main () {
    int i = 1;
    
    recursive_fun(i);

    return 0;
}