#include <stdio.h>

int main() {
    int i, j, k;
    int height;
    char alphabet = 'A';

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for(i = 1; i <= height; i++) {
        for(k = height; k > i; k--) {
            printf("  ");
        }
        
        for(j = 1; j <= i; j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }

    return 0;
}
