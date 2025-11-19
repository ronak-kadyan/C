//Pantern printing - number triangle

#include <stdio.h>
int main(){
    int rows, i, j, num;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nPatten1 - Number Triangle:\n");
    for(i = 1; i <= rows; i++){
        num = 1;
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    printf("\nPatten2 - Inverted Number Triangle:\n");
    for(i = rows; i >= 1; i--){
        num = 1;
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}