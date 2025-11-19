 #include <stdio.h>
 int main() {
    // Declare and initialize 3x3 matrix
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // Display matrix using nested loops
    printf("Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  // New line after each row
    }
    // Calculate and display diagonal sum (top-left to bottom-right)
    printf("Diagonal sum: %d\n", 
           matrix[0][0] + matrix[1][1] + matrix[2][2]);
    return 0;
 }