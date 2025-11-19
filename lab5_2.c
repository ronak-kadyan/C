//fibonacci series using recursion

#include <stdio.h>

int main(){
    int n, i, first = 0, second = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    if(n < 1){
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: \n");
        for(i = 0; i < n; i++){
            if(i <= 1){
                next = i;
            } else {
                next = first + second;
                first = second;
                second = next;
            }
            printf("%d ", next);
        }
        printf("\n");
    }
    return 0;
}