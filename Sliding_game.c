#include <stdio.h>

int main() {
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
    int x = 2, y = 2; // Empty spot coordinates
    int move;
    int temp, valid;

    while (1) {
        // Print the grid
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == 0) {
                    printf("  ");
                } else {
                    printf("%d ", grid[i][j]);
                }
            }
            printf("\n");
        }

        // Get user move
        printf("Enter a number neighboring the empty spot to slide: ");
        scanf("%d", &move);

        valid = 0;
        if (x > 0 && grid[x - 1][y] == move) {  // Check above
            valid = 1;
            temp = grid[x][y];
            grid[x][y] = grid[x - 1][y];
            grid[x - 1][y] = temp;
            x--;
        } else if (x < 2 && grid[x + 1][y] == move) {  // Check below
            valid = 1;
            temp = grid[x][y];
            grid[x][y] = grid[x + 1][y];
            grid[x + 1][y] = temp;
            x++;
        } else if (y > 0 && grid[x][y - 1] == move) {  // Check left
            valid = 1;
            temp = grid[x][y];
            grid[x][y] = grid[x][y - 1];
            grid[x][y - 1] = temp;
            y--;
        } else if (y < 2 && grid[x][y + 1] == move) {  // Check right
            valid = 1;
            temp = grid[x][y];
            grid[x][y] = grid[x][y + 1];
            grid[x][y + 1] = temp;
            y++;
        }

        if (!valid) {
            printf("Invalid move!\n");
        }

        // Check if the user won
        valid = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 2 && j == 2) continue;
                if (grid[i][j] != i * 3 + j + 1) {
                    valid = 0;
                    break;
                }
            }
        }

        if (valid) {
            printf("Congratulations! You won!\n");
            break;
        }
    }

    return 0;
}
