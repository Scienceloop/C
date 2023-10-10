#include <stdio.h>

// Function to display the grid
void displayGrid(int grid[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(grid[i][j] == 0) {
                printf("  ");
            } else {
                printf("%2d", grid[i][j]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

// Main function to run the program
int main() {
    int grid[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15,  0}
    };

    printf("Initial grid:\n");
    displayGrid(grid);

    // Add game logic here: user input, sliding tiles, win check, etc.

    return 0;
}
