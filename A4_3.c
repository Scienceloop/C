#include <stdio.h>

int main() {
    char str[100]; // String storage, assuming it won't be longer than 99 characters
    int count[5] = {0}; // Array to store vowel counts: a, e, i, o, u
    int i = 0; // Index for the string array
    char ch; // To read each character

    // Read string from user input
    printf("Enter a string: ");
    scanf("%99s", str); // Reads a word (up to 99 characters) into str
    
    // Count vowels
    while (str[i] != '\0') {
        ch = str[i];
        if (ch == 'a' || ch == 'A') count[0]++;
        else if (ch == 'e' || ch == 'E') count[1]++;
        else if (ch == 'i' || ch == 'I') count[2]++;
        else if (ch == 'o' || ch == 'O') count[3]++;
        else if (ch == 'u' || ch == 'U') count[4]++;
        i++;
    }

    // Print vowel counts
    printf("Number of 'a' or 'A': %d\n", count[0]);
    printf("Number of 'e' or 'E': %d\n", count[1]);
    printf("Number of 'i' or 'I': %d\n", count[2]);
    printf("Number of 'o' or 'O': %d\n", count[3]);
    printf("Number of 'u' or 'U': %d\n", count[4]);

    return 0;
}
