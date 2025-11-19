 #include <stdio.h>
 int main() {
    // Initialize array
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to first element
    // Access array elements using pointer arithmetic
    printf("Using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr+%d) = %d\n", 
               i, arr[i], i, *(ptr+i));
    }
    // Display memory addresses
    printf("\nPointer value: %p\n", (void*)ptr);
    printf("Next address: %p\n", (void*)(ptr+1));
    // Calculate size difference between addresses
    printf("Difference: %ld bytes\n", 
           (char*)(ptr+1) - (char*)ptr);
    return 0;
 }  