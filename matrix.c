#include <stdio.h>  

// The goal of this code is to create to simple 3x3 matrices 
// which will be multiplied with each other using for loops
int main() {  
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // define first matrix
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};  // define second matrix 
    int C[3][3] = {0};  // Define empty matrix to store result
// if I understand it correctly we will need 1 for loop to to iterate through each "line" and becasue there are also three rows the loops are limited to i < 3 
    for (int i = 0; i < 3; i++) {  // first for loop 
        for (int j = 0; j < 3; j++) {  // second for loop 
            for (int k = 0; k < 3; k++) {   // third for loop 
                /*C uses loop i & j to iterate through its content, A uses i & k and B uses k & j but why is A*B and then += C?
                and why was exactly this order of loops chosen. Also I do not understand what the loops do exactly ath this point*/
                C[i][j] += A[i][k] * B[k][j];  
            }  
        }  
    }  

    printf("Result:\n");  // here we're just printing "Result" and start a new line
    for (int i = 0; i < 3; i++) {   // here we're calling again the i loop (same as above)
        for (int j = 0; j < 3; j++) {  // and also the j loop which corresponds with the loops selected for C
            printf("%d ", C[i][j]);  // what does this percentage mean? do we store the data somewhere?
        }  
        printf("\n");  // here we're closing the line 
    }  

    return 0;  // why exactly is here a zero? I know that 0 indicates the end of a string but why should the function return 0?
}  