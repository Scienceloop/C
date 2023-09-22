#include <stdio.h>

void main() {
  int n = 0, i = 0, j = 0, isPrime = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);

    for(i = 2; i <= n; i++) {
        if(i == 2) {
            printf("%d ", i);
            continue;
        }
        
        isPrime = 1;
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

}
