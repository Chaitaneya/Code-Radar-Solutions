

#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    
    // Read input
    scanf("%d", &N);
    
    // Calculate sum using a loop
    for(int i = 1; i <= N; i++) {
        sum += i;
    }
    
    // Print result
    printf("%d\n", sum);
    
    return 0;
}