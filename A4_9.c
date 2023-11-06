#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1, isLowerTriangular = 1, isDiagonal = 1;
    int diagonalSum = 0, secondaryDiagonalSum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

           
            if(i > j && matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
            }

            
            if(j > i && matrix[i][j] != 0) {
                isLowerTriangular = 0;
            }

            
            if(i != j && matrix[i][j] != 0) {
                isDiagonal = 0;
            }

            
            if(i == j) {
                diagonalSum += matrix[i][j];
            }

            
            if(i + j == n - 1) {
                secondaryDiagonalSum += matrix[i][j];
            }
        }
    }

    printf("Matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

  
    printf("The matrix is:\n");
    
    if (isSymmetric == 1) {
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }

    if (isLowerTriangular == 1) {
        printf("Lower Triangular\n");
    } else {
        printf("Not Lower Triangular\n");
    }

    if (isDiagonal == 1) {
        printf("Diagonal\n");
    } else {
        printf("Not Diagonal\n");
    }
  
    printf("Sum of the main diagonal: %d\n", diagonalSum);
    printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);
  

    return 0;
}
