#include <stdio.h>

int main() {
    int hundreds, tens, ones, number, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    hundreds = (number / 100) % 10;
    tens = (number / 10) % 10;
    ones = number % 10;

    sum = hundreds + tens + ones;

    printf("Sum of digits: %d\n", sum);

    return 0;
}
