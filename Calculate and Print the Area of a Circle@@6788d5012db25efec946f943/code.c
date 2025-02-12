#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14;
    
    // Read the radius
    scanf("%f", &radius);
    
    // Calculate area
    float area = PI * radius * radius;
    
    // Print the area with 2 decimal places
    printf("Area: %.2f\n", area);
    
    return 0;
}