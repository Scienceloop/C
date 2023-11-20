#include <stdio.h>

void reverse(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        ++length;
    }

    for (int i = 0; i < length / 2; ++i) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: \n");
    scanf("%s", str);
    printf("Original string: %s \n", str);

    reverse(str);
    printf("Reversed string: %s \n", str);

    return 0;
}
