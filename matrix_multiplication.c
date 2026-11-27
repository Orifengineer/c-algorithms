#include <stdio.h>

int main() {
    int A[2][3] = {
        {2, 3, 4},
        {5, 6, 7}
    };

    int B[3][2] = {
        {1, -1},
        {2, 3},
        {4, 5}
    };

    int C[2][2] = {0};

    // Multiply A (2x3) and B (3x2) -> C (2x2)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting 2x2 matrix
    printf("Result matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
