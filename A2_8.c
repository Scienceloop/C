#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    if(num <= 0) {
        printf("The number must be greater than 0.\n");
        return 1;
    }

    while(num % 2 == 0) {
        num = num / 2;
    }
    
    if(num == 1) {
        printf("The number is a power of 2.\n");
    } else {
        printf("The number is not a power of 2.\n");
    }

    return 0;
}
