#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 5, 9, 6, 9, 7, 3};
    int n = 8;   // number of elements initially
    int i, j, key, found = 0;

    // Print original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Input element to delete
    printf("\nEnter element to delete: ");
    scanf("%d", &key);

    // Linear search and deletion
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            // shift all elements left
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;   // decrease size
            i--;   // check again at same index
        }
    }

    if (found == 0) {
        printf("Element not found!\n");
    } else {
        printf("Array after deleting %d: ", key);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;}

