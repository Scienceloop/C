#include <stdio.h>
#define ROWS 3
#define COLS 3

// Function to find the largest number in a 2D array
int findLargest(int arr[ROWS][COLS]) {
    int max = arr[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Largest number in the array is %d\n", findLargest(arr));
    return 0;
}
