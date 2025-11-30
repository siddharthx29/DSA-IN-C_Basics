#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int i1[n], i2[n];  // declare arrays with size n

    printf("Enter the elements of the first array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &i1[i]);  // take input into i1[i]
    }

    printf("Enter the elements of the second array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &i2[i]);  // take input into i2[i]
    }

    int total = 0;
    for(i=0; i<n; i++) {
        total += (i1[i] + i2[i]);  // sum corresponding elements
    }

    printf("The total sum of arrays is: %d\n", total);

    return 0;
}

