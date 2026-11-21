#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent (non-negative): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Error: Negative exponent is not supported in this integer program.\n");
        return 1;
    }

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d ^ %d = %lld\n", base, exponent, result);

    return 0;
}
