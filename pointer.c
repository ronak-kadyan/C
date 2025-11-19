#include <stdio.h>

int main(){
    //normal varibale
    int var = 10;

    //pointer variable ptr that 
    //stores address of var
    int *ptr = &var;

    //directly accessing ptr will 
    // give us an address
    printf("%d",ptr);

    return 0;
}