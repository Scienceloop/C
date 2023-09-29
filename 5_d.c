#include <stdio.h>

void main(){
  int n = 0;
  int sum = 0;
  int index = 1;
  int temp = 0;
  int i = 0;
  
  printf("Enter a number n:\n");
  scanf("%d", &n);

  for(i=1; i <= n; i++){
    temp = i;
    temp = temp*index;
    sum += temp;
    index *= -1;
  }
  printf("The sum is %d \n", sum);
}
