#include <stdio.h>
#include <math.h>

int main() {
    printf("Armstrong numbers from 1 to 1000:\n");

    for (int n = 1; n <= 1000; n++) {
        int temp = n, digits = 0, sum = 0;

        while (temp) {
            digits++;
            temp /= 10;
        }

        temp = n;
        while (temp) {
            int d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}
