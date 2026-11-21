#include <stdio.h> // Standard input/output library

int main(void) {
    int start, end, temp, i; // Boundaries, temporary swap variable, and loop counter
    long long even_sum = 0;  // Stores the sum of even numbers safely

    // Read two integer values from the keyboard
    printf("Enter first number: ");
    scanf("%d", &start);

    printf("Enter second number: ");
    scanf("%d", &end);

    // Ensure 'start' is smaller than or equal to 'end'
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    // Loop through all integers from 'start' to 'end' (inclusive)
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) { // Check if the number is even
            even_sum += i;
        }
    }

    printf("Sum of even numbers between %d and %d: %lld\n", start, end, even_sum);

    return 0;
}
