#include <stdio.h> // Standard input/output library

int main(void) {
    int n, i;
    int is_prime = 1; // Flag variable: 1 means prime, 0 means not prime

    // Read an integer from the keyboard
    printf("Enter a number: ");
    scanf("%d", &n);

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        is_prime = 0;
    } else {
        // Check divisors from 2 up to n / 2
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) { // If divisible by 'i', 'n' is not prime
                is_prime = 0;
                break; // No need to check further divisors
            }
        }
    }

    // Print the final result based on the flag
    if (is_prime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
