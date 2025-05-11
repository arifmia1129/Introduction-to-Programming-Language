#include <stdio.h>

void recursive_fun (int num) {
    if(!num) {
        return;
    }
    printf("%d\n", num);

    recursive_fun(num - 1);
}

int main () {

    recursive_fun(5);
    
    return 0;
}