// #include <stdio.h>
// #include <string.h>

// void vowel_count (char s[], int i, int c) {
    
    
//     int lng = strlen(s);

//     if(i == lng) {
//         printf("%d", c);
//         return;
//     }
    
//     if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
//         c++;
//     }

//     vowel_count(s, i + 1, c);

// }

// int main () {
//    char s[1000001];

//     fgets(s, 1000001, stdin);

//     vowel_count(s, 0, 0);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int vowel_count (char s[], int i) {
    
    if(s[i] == '\0') {
        return 0;
    }
    
   int cnt = vowel_count(s, i + 1);


   if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
      return cnt + 1;
    }else {

        return cnt;
    }
   


}

int main () {
   char s[1000001];

    fgets(s, 1000001, stdin);

   int count =  vowel_count(s, 0);

   printf("%d", count);

    return 0;
}