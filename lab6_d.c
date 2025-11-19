 #include <stdio.h>
 int main() {
    // Initialize unsorted array
    int arr[] = {64, 34, 25, 12, 22, 11};
    int n = 6;  // Number of elements
    // Display original array
    printf("Original: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    // Bubble sort algorithm
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            // Swap if current element is greater than next
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // Display sorted array
    printf("\nSorted: ");
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
 }