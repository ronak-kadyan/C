// Prime number checker with factorization

#include <stdio.h>

int main(){
    int num, i, count = 0;

    // Read input and validate
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 0, 1 and negative numbers are not prime (handle early)
    if (num <= 1){
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Print factors and count them
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");

    // If exactly two factors (1 and itself), it's prime
    if (count == 2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}