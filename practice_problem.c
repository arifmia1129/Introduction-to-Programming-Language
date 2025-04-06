// 1. Explain why we need long long int data type? 
// Answer: Actually, there are a limitations of each data types of c programming language. Int data type can store 8 bytes. That means we can store 4 x 8 = 32 bytes (10^9). For our work/requirement we need to use more then 10^9 numbers with variable and in this case we are using long long int data type.

// 2. Write all the rules for naming a variable in C programming.
/**
 * Start variables name with letters or underscore
 * Variables only contains letters, underscore and numbers not special characters.
 * Doesn't contains reserved keywords. Eg. int, float, double, if, else, for etc
 * */ 
// 3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  

#include<stdio.h>

int main() {
    int first_num, second_num;

    scanf("%d %d", &first_num, &second_num);

    printf("The entered numbers: (second, first) %d, %d", second_num, first_num);
}