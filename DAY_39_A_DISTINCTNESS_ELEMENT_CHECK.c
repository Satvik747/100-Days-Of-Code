/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int A[10][10], n, i, j, k, flag = 1;

    // Read the order of the square matrix
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (A[i][i] == A[k][k]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    // Print matrix
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Display result
    if (flag)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");

    return 0;
}

