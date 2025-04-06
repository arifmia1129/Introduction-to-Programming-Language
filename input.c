#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    scanf("%d %f %c", &i, &f, &c);

    printf("The entered integer value is: %d\n", i);
    printf("The entered float value is: %f\n", f);
    printf("The entered character value is: %c\n", c);

    return 0;
}