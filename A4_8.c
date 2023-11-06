#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS], C[MAX_ROWS][MAX_COLS];
    int row, col, i, j;
    

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements for matrix A:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter elements for matrix B:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

  
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant matrix after addition:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
