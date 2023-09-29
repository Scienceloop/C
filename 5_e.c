#include <stdio.h>

void main(){
  int n = 0;
  int sum = 0;
  int diff = 2;
  int temp = 0;
  int i = 0;
  
  printf("Enter a number n:\n");
  scanf("%d", &n);

  for(i=1; i <= n; i++){
    temp = diff*i;
    sum += temp;
  }
  printf("The sum is %d \n", sum);
}
