#include <stdio.h>
int main() {
    float a, b, result;
    printf("Enter two floating numbers: ");
    scanf("%f %f", &a, &b);
    result = a * b;
    printf("Product = %.2f", result);
    return 0;
}
