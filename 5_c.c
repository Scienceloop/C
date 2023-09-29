#include <stdio.h>

int main() {
    int n;
    double x, sum = 1.0;
    double term = 1.0; 
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++) {
        term = term * x / i;
        sum += term;
    }
    
    printf("The sum of the series up to %d terms for x = %.2lf is %.6lf\n", n, x, sum);
    
    return 0;
}
