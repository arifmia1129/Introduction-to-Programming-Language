#include <stdio.h>
#include <string.h>

void division_with_lucky (int i) {
    

    if(i == 0) {
        printf("NO");
        return;
    }

    if(i % 4 ==0 || i % 7 == 0 || i % 47 == 0){
        printf("YES");
        return;
    }

    int last = i % 10;

    if(last  != 4 && last  != 7) {
        printf("NO");
        return;
    }

    division_with_lucky(i / 10);

}

int main () {
   int n;

   scanf("%d", &n);

    
    division_with_lucky(n);

    return 0;
}