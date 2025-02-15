#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);
    
    // Check if numbers have opposite signs
    // This is true when their product is less than zero
    if (num1 * num2 < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}