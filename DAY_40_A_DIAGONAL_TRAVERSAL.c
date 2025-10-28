/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Perform diagonal traversal
    for (int k = 0; k < n + m - 1; k++) {
        if (k % 2 == 0) {
            // Traverse upwards
            for (int i = n - 1; i >= 0; i--) {
                int j = k - i;
                if (j >= 0 && j < m)
                    printf("%d ", arr[i][j]);
            }
        } else {
            // Traverse downwards
            for (int i = 0; i < n; i++) {
                int j = k - i;
                if (j >= 0 && j < m)
                    printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
