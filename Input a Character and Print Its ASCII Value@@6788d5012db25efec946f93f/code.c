#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character

    scanf("%c", &ch);

    // Print the ASCII value of the entered character
    printf("ASCII value: '%c' %d\n", ch, ch);

    return 0;
}
