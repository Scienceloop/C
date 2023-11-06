#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[200];
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Enter a string: \n");
    scanf("%s", str1); 

    printf("Enter a string: \n");
    scanf("%s", str2); 

    while (str1[i] != '\0') {
      str3[i] = str1[i];
      i++;
    }
  
    while (str2[j] != '\0') {
      str3[i] = str2[j];
      i++;
      j++;
    }
    

    printf("%s", str3);
  
  
    return 0;
}
