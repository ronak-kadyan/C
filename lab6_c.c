#include <stdio.h>
 int main() {
    // Initialize array with random values
    int arr[] = {15, 8, 23, 42, 7, 19};
    int n = 6;          // Number of elements
    int search = 23;    // Element to search
    int found = 0;      // Flag to track if element is found
    // Display array elements
    printf("Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // Linear search: check each element
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("\nFound %d at index %d\n", search, i);
            found = 1;
            break;  // Exit loop when found
        }
    }
    // Display message if not found
    if(!found) 
        printf("\nElement not found\n");
    return 0;
 }