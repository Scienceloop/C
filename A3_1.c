#include <stdio.h>

int main() {
    int n, i, max, min, sum = 0, oddSum = 0;
    float avg;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];


    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
        if(arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }

  
    avg = (float)sum / n;

  
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Average value: %.2f\n", avg);
    printf("Sum of odd numbers: %d\n", oddSum);
    printf("Array in reverse: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
