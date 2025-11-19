 #include <stdio.h>
 int main() {
    // Declare and initialize two 2x2 matrices
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];  // Matrix to store sum
    // Add corresponding elements of both matrices
    printf("Matrix 1 + Matrix 2 = Result\n\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    // Display the result matrix
    printf("Result Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
 