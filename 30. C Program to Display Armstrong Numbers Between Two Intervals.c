
#include <stdio.h>
#include <math.h>

int main() {
    int low, high;

    printf("Enter lower and upper interval: ");
    scanf("%d %d", &low, &high);

    for (int n = low; n <= high; n++) {
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
