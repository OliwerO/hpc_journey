#include <stdio.h>  

/* 
* Multiplies two 3x3 matrices and prints the result
* Uses triple nested loops to compute the dot product 
*/
int main() {  
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // define first matrix
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};  // define second matrix 
    int C[3][3] = {0};  // Define empty matrix to store result

// Loops to compute the dot product 
    for (int i = 0; i < 3; i++) {  // iterates through rows of -> A [i][]
        for (int j = 0; j < 3; j++) {  // iterates through columns of B [][j]
            for (int k = 0; k < 3; k++) {   // iterates through columns of -> A[i][k] and rows of -> B[k][j]
                C[i][j] += A[i][k] * B[k][j];  // Accumulate the dot products of A's row (i) and B's column (j)
            }  
        }  
    }  
    //print result matrix
    printf("Result:\n");  
    for (int i = 0; i < 3; i++) {   
        for (int j = 0; j < 3; j++) {  
            printf("%d ", C[i][j]);  //Print integer value
        }  
        printf("\n");  // New line after each row 
    }  

    return 0;  // Indicate successful execution
}  