#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char s[1001];
    
   scanf("%s", s);
    
   int lng = strlen(s);
    
   int even_sum = 0;
   int odd_sum = 0;


   for(int i = lng - 1; i >= 0; i--) {
       if(i % 2 == 0) {
        even_sum +=  s[i] - 48;
       }else{
        odd_sum +=  s[i] - 48;
       }
   }

   int dif = abs(even_sum - odd_sum);

   if(dif % 11 == 0) {
    printf("YES");
   }else{
    printf("NO");
   }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
