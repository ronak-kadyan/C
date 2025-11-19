#include <stdio.h>

int main(){

    int i;
    printf("Enter your age: "); 
    scanf("%d", &i);

    if (i < 18){
        printf("not eligible for vote"); 
    }
    else{
        printf("eligible for vote");
    }
    return 0;
}