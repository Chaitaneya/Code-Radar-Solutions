#include <stdio.h>

int main() {
    int radius;
    int area;
    // Read name, age, and hobby
    scanf("d%",&radius);
    float area = 3.14*(float)(radius*radius);
    // Print the information in separate lines
    printf("Area: %d", area);
    return 0;
}