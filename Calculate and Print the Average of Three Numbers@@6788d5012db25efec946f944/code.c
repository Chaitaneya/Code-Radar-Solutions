#include <stdio.h>

int main() {
    int num1,num2,num3;
    
    // Read the double-precision number
    scanf("%d %d %d", &num1,&num2,&num3);
    float avg = (num1+num2+num3)/3
    // Print the entered number
    printf("You entered: %.2f\n", avg);
    
    return 0;
}