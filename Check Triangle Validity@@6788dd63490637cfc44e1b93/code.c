#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid");
    } 
    else {
        printf("Invalid");
    }

    return 0;
}
