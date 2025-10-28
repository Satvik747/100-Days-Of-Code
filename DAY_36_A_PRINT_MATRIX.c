/*Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}


