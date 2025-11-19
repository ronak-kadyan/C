#include<stdio.h>

int main(){
    int cube[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    int layer_size = 2;
    int row_size = 2;
    int col_size = 2;

    printf("3D Array (cube) elements:\n");

    for (int k =0; k< layer_size; k++){
        printf("Layer %d:\n", k);
        for (int i = 0; i < row_size; i++){
            for (int j = 0; j < col_size; j++){
                printf("cube[%d][%d][%d] = %d\n", k, i, j, cube[k][i][j]);
            }
            printf("\n"); // newline after each row
        }
    }
    printf("\n specific elements cibe[1][0][1]: %d\n", cube[1][0][1]); // output would be 6

    return 0;
}
