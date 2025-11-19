// C program for swapping two numbers
#include <stdio.h>

int main(){
    int a, b, temp; // Fixed variable declaration
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b); // Fixed scanf format

    printf("before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}