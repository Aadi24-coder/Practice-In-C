#include <stdio.h>

int main() {
    int m, n, p, q;
    int A[100][100], B[100][100], C[100][100];
    int i, j, k;

    // Read dimensions of Matrix A
    printf("Enter rows and columns for matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Read dimensions of Matrix B
    printf("Enter rows and columns for matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Reason: Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }

    // Read elements of Matrix A
    printf("\nEnter elements of Matrix A (row-wise):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read elements of Matrix B
    printf("\nEnter elements of Matrix B (row-wise):\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication: C = A × B
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
