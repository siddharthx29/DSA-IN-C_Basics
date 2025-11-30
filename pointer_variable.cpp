

#include <stdio.h>

int main() {
    int a; 
    int *p;

    a = 5;
    p = &a;  // p stores the address of a

    printf("a = %d, *p = %d\n", a, *p);

    *p = 20;  // changes the value of 'a' using pointer

    printf("After changing *p:\n");
    printf("a = %d, *p = %d\n", a, *p);

    return 0;
}

