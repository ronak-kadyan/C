#include <stdio.h>
#include <math.h>

// Evaluate x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a) and x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a) for a = 1, b = -3, c = 2

int main() {
    double a = 1, b = -3, c = 2;
    double discriminant = b*b - 4*a*c;
    
    if (discriminant < 0) {
        printf("No real roots.\n");
    } else {
        double sqrt_discriminant = sqrt(discriminant);
        double x1 = (-b + sqrt_discriminant) / (2*a);
        double x2 = (-b - sqrt_discriminant) / (2*a);
        
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    
    return 0;
}
