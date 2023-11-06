#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter a string: \n");
    scanf("%s", str); 

    while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] -= 32;
      }
        i++;
    }

    printf("%s", str);
  
  
    return 0;
}
