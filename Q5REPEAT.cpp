#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string (no spaces allowed)
    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    // Find length
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print in reverse
    printf("String in reverse: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

