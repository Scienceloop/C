#include <stdio.h>

// Function to determine if s2 is a substring of s1
int subs(const char *s1, const char *s2) {
    if (*s2 == '\0') return 1; // An empty string is a substring of any string

    for (int i = 0; s1[i] != '\0'; i++) {
        int j;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (s2[j] == '\0') { // If the end of s2 is reached, s2 is a substring of s1
            return 1;
        }
    }
    return 0; // s2 is not a substring of s1
}

// Function to get a line of text from stdin
void getLine(char *buffer, int size) {
    int i = 0;
    char c;
    while (i < size - 1 && (c = getchar()) != '\n' && c != EOF) {
        buffer[i++] = c;
    }
    buffer[i] = '\0'; // Null-terminate the string
}

int main() {
    char s1[100], s2[100];
    printf("Enter the main string: ");
    getLine(s1, sizeof(s1));
    printf("Enter the substring to check: ");
    getLine(s2, sizeof(s2));
    printf("Is substring: %d\n", subs(s1, s2));
    return 0;
}
