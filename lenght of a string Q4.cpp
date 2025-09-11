#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string (will stop at space)
    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    // Calculate length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

