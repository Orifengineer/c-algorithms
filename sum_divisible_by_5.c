#include <stdio.h>

int main() {
    int num1, num2, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap values if the first number is greater than the second
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Sum numbers divisible by 5 between num1 and num2 (inclusive)
    for (int i = num1; i <= num2; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }

    printf("Sum of numbers divisible by 5 between %d and %d: %d\n", num1, num2, sum);

    return 0;
}
