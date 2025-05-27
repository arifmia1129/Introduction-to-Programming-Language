#include <stdio.h>
#include <string.h>

int main () {
    int x, y;

    scanf("%d %d", &x, &y);

     int balance_cnt = 0;

        for(int i = x; i <= y; i++) {
            char s[1000001];

            sprintf(s, "%d", i);

            int even_count = 0;
            int odd_count = 0;

            int lng = strlen(s);

            for(int i= 0; i < lng; i++) {
                int int_val = s[i] - 48;
                if(int_val % 2 == 0){
                    even_count++;
                }else {
                    odd_count++;
                }
            }

            if(odd_count == even_count) {
                balance_cnt++;
                printf("%s\n", s);
            }
        }

        if(!balance_cnt) {
            printf("-1");
        }

    return 0;
}