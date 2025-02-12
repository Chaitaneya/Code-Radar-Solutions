

#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;
    
    // Read name, age, and hobby
    scanf("%s %d %s", name, &age, hobby);
    
    // Print the information in separate lines
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    
    return 0;
}