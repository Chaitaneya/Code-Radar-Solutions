#include <stdio.h>

int main() {
    float num1, num2;
    
    // Read two floating-point numbers
    scanf("%f %f", &num1, &num2);
    
    // Calculate product
    float product = num1 * num2;
    
    // Print result
    printf("Product: %.2f\n", product);
    
    return 0;
}