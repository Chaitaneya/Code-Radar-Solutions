#include <stdio.h>

int main() {
    int num;
    
    // Read the integer
    scanf("%d", &num);
    
    // Check if positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    
    return 0;
}