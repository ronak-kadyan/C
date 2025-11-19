 #include <stdio.h>
 int main() {
    // Declare and initialize array with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;  // Variable to store sum
    // Display array elements using for loop
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];  // Add each element to sum
    }
    // Calculate and display sum and average
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", sum/5.0);
    return 0;
 }