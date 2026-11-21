#include <stdio.h>

int main() {
    int number;
    int even_count = 0, odd_count = 0;
    double even_sum = 0.0, odd_sum = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            even_sum += number;
            even_count++;
        } else {
            odd_sum += number;
            odd_count++;
        }
    }

    if (even_count > 0) {
        printf("Average of even numbers: %.2f\n", even_sum / even_count);
    } else {
        printf("No even numbers were entered.\n");
    }

    if (odd_count > 0) {
        printf("Average of odd numbers: %.2f\n", odd_sum / odd_count);
    } else {
        printf("No odd numbers were entered.\n");
    }

    return 0;
}
