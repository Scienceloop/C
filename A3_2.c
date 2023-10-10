#include <stdio.h>

int main() {
    int n, i, s, i2, min, sum = 0, oddSum = 0;
    float avg;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a Number ");
    scanf("%d", &s);
    
    for(i2 = 0; i2 < n; i2++) {
      if (arr[i2] == s){
         printf("Index of your Number is: %d \n", i2);
         
      }
    }

    if(i2 == n){
      printf("The Number is not in the database \n");
    }
  
    return 0;
}
