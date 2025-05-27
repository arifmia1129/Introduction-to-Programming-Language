#include <stdio.h>
#include<string.h>

int main () {
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char s[1000001];
        scanf("%s", s);

        int lng = strlen(s);


        char count_s[27] = {0};

        for(int i = 0; i < lng; i++) {
            count_s[s[i] - 97]++;
        }

        int odd_sum = 0;


        for(int i = 0; i < 27; i++) {
            if(count_s[i] % 2 != 0) {
                odd_sum ++;
            }
        }

        if(odd_sum == 0) {
            printf("0\n");
        }else{
            printf("%d\n", odd_sum - 1);
        }

    }

    return 0;
}

// 3
// 0
// 2