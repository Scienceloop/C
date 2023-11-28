#include <stdio.h>

void findLargestForRowAndColumn(int rows, int cols, int array[rows][cols], int largestRow[], int largestCol[]) {
    for (int i = 0; i < rows; ++i) {
        int maxRow = array[i][0];
        for (int j = 1; j < cols; ++j) {
            if (array[i][j] > maxRow) {
                maxRow = array[i][j];
            }
        }
        largestRow[i] = maxRow;
    }

    for (int j = 0; j < cols; ++j) {
        int maxCol = array[0][j];
        for (int i = 1; i < rows; ++i) {
            if (array[i][j] > maxCol) {
                maxCol = array[i][j];
            }
        }
        largestCol[j] = maxCol;
    }
}

void displayArray(int size, int array[]) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int myArray[rows][cols];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &myArray[i][j]);
        }
    }

    int largestRow[rows];
    int largestCol[cols];

    findLargestForRowAndColumn(rows, cols, myArray, largestRow, largestCol);

    printf("Largest number in each row: ");
    displayArray(rows, largestRow);

    printf("Largest number in each column: ");
    displayArray(cols, largestCol);

    return 0;
}
