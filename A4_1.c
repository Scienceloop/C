#include <stdio.h>

int main() {
    int n, i;
    int min, max;
  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
  
    if (n <= 0) {
        printf("Number of elements must be greater than 0.\n");
        return 1;
    }
    
    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    min = max = array[0];

    for(i = 1; i < n; i++) {
        if(array[i] < min) min = array[i];
        if(array[i] > max) max = array[i];
    }

    printf("Minimum element in the array is: %d\n", min);
    printf("Maximum element in the array is: %d\n", max);

    return 0;
}
