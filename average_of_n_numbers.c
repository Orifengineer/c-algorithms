#include <stdio.h>

int main() {
    int count;
    double number, sum = 0.0;

    printf("How many numbers will you enter? ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Please enter a positive count.\n");
        return 1;
    }

    for (int i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);
        sum += number;
    }

    double average = sum / count;
    printf("Average: %.2f\n", average);

    return 0;
}
