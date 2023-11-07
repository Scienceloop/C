#include <stdio.h>

int main() {
    char word[100];
    int word_count = 0;

    printf("Enter a string: ");

    while (scanf("%s", word) == 1) {
        word_count++;

        if (getchar() == '\n') {
            break;
        }
    }

    printf("Number of words: %d\n", word_count);

    return 0;
}
