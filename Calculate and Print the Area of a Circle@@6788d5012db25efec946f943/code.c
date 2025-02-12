#include <stdio.h>

int main() {
    int radius;
    float area;

    // Read the radius of the circle
    scanf("%d", &radius);

    // Calculate the area of the circle
    area = 3.14 * (float)(radius * radius);

    // Print the area of the circle with 2 decimal places and move to a new line
    printf("Area: %.2f\n", area);

    return 0;
}
