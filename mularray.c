#include <stdio.h>
#include <stdlib.h>


void readMatrix(int **matrix, int rows, int cols) {
    printf("SURBHI\n");

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {


            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int **A, int rowsA, int colsA, int **B, int rowsB, int colsB, int **result) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowsM, colsM;
    printf("Enter the number of rows and columns for Matrix M: ");
    scanf("%d %d", &rowsM, &colsM);

    int **M = (int **)malloc(rowsM * sizeof(int *));
    for (int i = 0; i < rowsM; ++i) {
        M[i] = (int *)malloc(colsM * sizeof(int));
    }

    printf("Enter elements for Matrix M:\n");
    readMatrix(M, rowsM, colsM);

    int rowsN, colsN;
    printf("Enter the number of rows and columns for Matrix N: ");
    scanf("%d %d", &rowsN, &colsN);

    int **N = (int **)malloc(rowsN * sizeof(int *));
    for (int i = 0; i < rowsN; ++i) {
        N[i] = (int *)malloc(colsN * sizeof(int));
    }

    printf("Enter elements for Matrix N:\n");
    readMatrix(N, rowsN, colsN);

    if (colsM != rowsN) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int **result = (int **)malloc(rowsM * sizeof(int *));
    for (int i = 0; i < rowsM; ++i) {
        result[i] = (int *)malloc(colsN * sizeof(int));
    }

    multiplyMatrices(M, rowsM, colsM, N, rowsN, colsN, result);

    printf("Result of Matrix Multiplication:\n");
    printMatrix(result, rowsM, colsN);

    // Free allocated memory
    for (int i = 0; i < rowsM; ++i) {
        free(M[i]);
    }
    free(M);

    for (int i = 0; i < rowsN; ++i) {
        free(N[i]);
    }
    free(N);

    for (int i = 0; i < rowsM; ++i) {
        free(result[i]);
    }
    free(result);

    return 0;
}
