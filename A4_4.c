#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter a string: \n");
    scanf("%s", str); 

    while (str[i] != '\0') {
        i++;
    }

    while (i >= j ){
      if(str[j] = str[i]){
        k++;
      }
      i--;
      j++;
    }

    if (k == i){
      printf("The String is palindrome");
    }
  
  
    return 0;
}
