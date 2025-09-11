#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string (can include spaces): ");
    fgets(str, sizeof(str), stdin);  // reads whole line

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')  // ignore newline added by fgets
            length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

