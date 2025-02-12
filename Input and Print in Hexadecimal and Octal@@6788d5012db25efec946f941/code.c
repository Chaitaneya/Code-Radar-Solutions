#include <stdio.h>

int main() {
    int num;
    
    // Read the integer input
    scanf("%d", &num);
    
    // Print hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);
    
    return 0;
}