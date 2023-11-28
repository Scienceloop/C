#include <stdio.h>

int findLargest(int rows, int cols, int array[rows][cols]) {
    int largest = array[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }

    return largest;
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

    int result = findLargest(rows, cols, myArray);
    printf("The largest integer is: %d\n", result);

    return 0;
}
