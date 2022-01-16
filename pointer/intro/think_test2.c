#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x; // x = 10 to x = 15
    y = *p; // y = 10
    *p = 15; 
    *q = 20;

    printf("Value of x: %d\n", x); // 15
    printf("Value of y: %d\n", y); //10
    printf("value of *p: %d\n", *p); //15
    printf("value of *q: %d\n", *q); // 20

    return 0;
}