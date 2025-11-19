 #include <stdio.h>
 // Function to swap two integers using pointers
 void swap(int *a, int *b) {
    int temp = *a;  // Store value at address a
    *a = *b;        // Copy value from b to a
    *b = temp;      // Copy stored value to b
 }
 int main() {
    int x = 10, y = 20;
    // Swap simple variables
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);  // Pass addresses of x and y
    printf("After swap: x=%d, y=%d\n", x, y);
    // Swap array elements
    int arr[] = {5, 3};
    printf("\nArray before: %d, %d\n", arr[0], arr[1]);
    swap(&arr[0], &arr[1]);  // Pass addresses of array elements
    printf("Array after: %d, %d\n", arr[0], arr[1]);
    return 0;
 }