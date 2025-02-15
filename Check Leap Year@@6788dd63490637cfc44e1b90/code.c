#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        printf("Leap year.\n");
    }
    // Not a leap year if divisible by 100
    else if (year % 100 == 0) {
        printf("Not a leap year.\n");
    }
    // Leap year if perfectly divisible by 4
    else if (year % 4 == 0) {
        printf("Leap year.\n");
    }
    // All other years are not leap years
    else {
        printf("Not a leap year.\n");
    }

    return 0;
}
