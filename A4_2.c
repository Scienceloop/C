#include <stdio.h>

// Function to compare two strings
int compare_strings(char str1[], char str2[]) {
    int i = 0;

    // Continue to compare if characters are the same
    while (str1[i] == str2[i]) {
        // If we reach the end of both strings
        if (str1[i] == '\0' && str2[i] == '\0')
            return 0; // strings are identical
        i++;
    }

    // Return the difference in ASCII values of the differing characters
    return 1;
}

int main() {
    char str1[100], str2[100]; 
  
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);

  
    int result = compare_strings(str1, str2);

    if (result == 0) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are not identical.\n");
    }

    return 0;
}
