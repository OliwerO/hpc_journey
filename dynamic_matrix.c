#include <stdio.h>
#include <stdlib.h>

int** create_matrix() {
    // Allocate memory for 2 rows (int*)
    int** matrix = (int**)malloc(2 * sizeof(int*));
    if (matrix == NULL) return NULL;

    // Allocate 2 columns per row and initialize to 0
    for (int i = 0; i < 2; i++) {
        matrix[i] = (int*)malloc(2 * sizeof(int));
        if (matrix[i] == NULL) {
            for (int j = 0; j < i; j++) free(matrix[j]);
            free(matrix);
            return NULL;
        }
        // Initialize all elements to 0
        for (int j = 0; j < 2; j++) { // ✅ "int j" added here
            matrix[i][j] = 0;
        }
    }

    // Assign values as per the task
    matrix[0][0] = 10;
    matrix[1][1] = 20;

    return matrix;
}

int main() {
    // Create the matrix
    int** my_matrix = create_matrix();

    // Print the assigned values
    printf("matrix[0][0] = %d\n", my_matrix[0][0]); // ✅ Corrected variable name
    printf("matrix[1][1] = %d\n", my_matrix[1][1]);

    // Free memory
    for (int i = 0; i < 2; i++) {
        free(my_matrix[i]);
    }
    free(my_matrix);

    return 0;
}