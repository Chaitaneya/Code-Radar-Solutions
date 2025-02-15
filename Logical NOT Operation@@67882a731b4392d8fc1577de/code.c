#include <stdio.h>

int main() {
    int num;
    
    // Read one integer
    scanf("%d", &num);
    
    // Check if the number is not greater than zero using !
    if (!(num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}