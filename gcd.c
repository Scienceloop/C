#include <stdio.h>

void main() {
    int num1, num2, remainder;
  
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while(num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("GCD of the entered numbers is: %d\n", num1);
}
