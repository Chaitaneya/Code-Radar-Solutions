#include <stdio.h>

int main() {
    int year;
    
    // Read the integer
    scanf("%d", &year);
    
    // Check if positive, negative, or zero
    if (year%4==0 && year%100!=0) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    
    return 0;
}