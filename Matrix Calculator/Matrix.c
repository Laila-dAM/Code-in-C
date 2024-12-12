#include <stdio.h>

void addMatrices(int m, int n, int A[m][n], int B[m][n], int result[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int m, int n, int A[m][n], int B[m][n], int result[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int m, int n, int p, int A[m][n], int B[n][p], int result[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int m, int n, int matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, choice;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &p, &n);
    int B[p][n];
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
     int result[m][n];
    do {
        printf("\nChoose an operation:\n");
        printf("1. Add matrices\n2. Subtract matrices\n3. Multiply matrices\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (m == p && n == n) {
                    addMatrices(m, n, A, B, result);
                    printf("Result of addition:\n");
                    printMatrix(m, n, result);
                } else {
                    printf("Matrix sizes are not compatible for addition.\n");
                }
                break;
            case 2:
                if (m == p && n == n) {
                    subtractMatrices(m, n, A, B, result);
                    printf("Result of subtraction:\n");
                    printMatrix(m, n, result);
                } else {
                    printf("Matrix sizes are not compatible for subtraction.\n");
                }
                break;
            case 3:
                if (n == p) {
                    int product[m][n];
                    multiplyMatrices(m, n, p, A, B, product);
                    printf("Result of multiplication:\n");
                    printMatrix(m, n, product);
                } else {
                    printf("Matrix sizes are not compatible for multiplication.\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
    return 0;
}


