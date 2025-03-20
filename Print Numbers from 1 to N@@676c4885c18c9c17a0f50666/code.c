#include <stdio.h>

int main() {
    int N;
    
    // Read the input value N
    scanf("%d", &N);
    
    // Loop from 1 to N
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        
        // Print space after each number except the last one
        if (i < N) {
            printf(" ");
        }
    }
    
    return 0;
}