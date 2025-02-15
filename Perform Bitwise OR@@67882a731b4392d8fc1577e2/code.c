#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two space-separated integers
    scanf("%d %d", &num1, &num2);
    
    // Perform bitwise OR operation and print result
    printf("%d\n", num1 | num2);
    
    return 0;
}