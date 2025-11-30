#include <stdio.h>

void display(int n) {
    if (n == 0) {
        return;  // base condition
    }
    printf("%d\t", n);
    display(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    display(n);
    return 0;
}

