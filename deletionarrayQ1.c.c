#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter the position (1 to %d) to delete: ", n);
    scanf("%d", &pos);

    // Check for valid position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements left
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce array size

        // Print updated array
        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

