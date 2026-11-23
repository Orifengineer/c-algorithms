#include <stdio.h>

int main() {
    int i, number;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Invalid number entered!\n");
        return 1;
    }

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial = %lld\n", factorial);
    return 0;
}
