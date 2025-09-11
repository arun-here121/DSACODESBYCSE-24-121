#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);   // allows spaces in input

    // Find length of string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print string in reverse
    printf("String in reverse: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

