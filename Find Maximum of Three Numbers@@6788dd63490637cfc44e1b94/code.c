#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1; // Assume num1 is the maximum

    if (num2 > max) {
        max = num2; // Update max if num2 is greater
    }

    if (num3 > max) {
        max = num3; // Update max if num3 is greater
    }

    printf("%d", max);

    return 0;
}
