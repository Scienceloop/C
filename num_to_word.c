#include <stdio.h>

int main(void) {
  int num = 0;
  int digit = 0;
  int divisor = 1;
    
  printf("Enter a number: ");
  scanf("%d", &num);
  
    while (num / divisor >= 10) {
        divisor *= 10;
    }
  
  while (num != 0) {
        digit = num / divisor;
        num = num % divisor;
       	divisor = divisor/10;

        switch(digit) {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
            default: printf("Invalid digit "); break;
        }
    }
  return 0;
}
