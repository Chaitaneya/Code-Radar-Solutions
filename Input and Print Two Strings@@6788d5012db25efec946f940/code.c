#include <stdio.h>

int main() {
    char str1[50], str2[50];
    
    // Read two space-separated strings
    scanf("%s %s", str1, str2);
    
    // Print the strings in required format
    printf("You entered: %s and %s\n", str1, str2);
    
    return 0;
}