#include <stdio.h>
int main() {
    float a1, b1, a2, b2, real, imag;
    printf("Enter first complex number (a b): ");
    scanf("%f %f", &a1, &b1);
    printf("Enter second complex number (a b): ");
    scanf("%f %f", &a2, &b2);
    real = a1 + a2;
    imag = b1 + b2;
    printf("Sum = %.1f + %.1fi", real, imag);
    return 0;
}
