#include <stdio.h> // Standard input/output library for printf and scanf

int main(void) {
    char name[100]; // Character array to store the input name (up to 99 chars + '\0')
    int count, i;   // 'count' for how many times to print, 'i' for the loop counter

    // Prompt the user to enter a name
    printf("Enter name: ");
    scanf("%99s", name); // Reads a single word without spaces safely

    // Prompt the user to enter how many times to print the name
    printf("How many times to print: ");
    scanf("%d", &count); // Stores the integer into the memory address of 'count'

    // Loop runs 'count' times (from i = 0 up to count - 1)
    for (i = 0; i < count; i++) {
        printf("%s\n", name); // Prints the name followed by a new line
    }

    return 0; // Indicates successful program execution
}
