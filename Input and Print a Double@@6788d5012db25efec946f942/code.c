#include <stdio.h>

int main() {
    double num;
    
    // Read the double-precision number
    scanf("%lf", &num);
    
    // Print the entered number
    printf("You entered: %.4lf\n", num);
    
    return 0;
}