#include <stdio.h>

double computePower(int a, int b) {
    double result = 1.0;
    int power = b;

    if (b >= 0) {
        while (power > 0) {
            if (power % 2 != 0) {
                result *= a;
            }
            a *= a;
            power /= 2;
        }
        return result;
    } else {
        return 1.0 / computePower(a, -b);
    }
}

int main() {
    int a, b;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    double power = computePower(a, b);
    printf("%d raised to %d = %.2f\n", a, b, power);

    return 0;
}
