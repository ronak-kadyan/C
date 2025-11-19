#include <stdio.h>

int main(){
    float a;
    printf("enter your value for a:");
    scanf("%f",&a);

    float b = 6;
    printf("enter your value for b:");
    scanf("%f", &b);

    float c;

    printf("given numbers: a = %f, b = %f \n", a,b);

    c = a+b;
    printf("addiation of a and b = %f\n",c);

    c = a-b;
    printf("Subtraction of a and b = %f\n",c);

    c = a*b;
    printf("multiplication of a and b = %f\n",c);

    c = a / b;
    printf("division of a and b = %f\n",c);
    
    return 0;
}