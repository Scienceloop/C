#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 20; i <= 30; i++) {

        if((i % 2 == 0 ) && (i % 3 == 0)) {
            sum += i; 
        }
    }
    
    printf("The sum of numbers between 20 and 30 that are divisible by both 2 and 3 is %d\n", sum);
    
    return 0;
}
