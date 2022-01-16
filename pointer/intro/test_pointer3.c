#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p;

    printf("1st Value of x: %d\n", x); // 10

    p = &x; // x = 15
    y = *p; //y = 10
    *p = 15;

    printf("Value of x: %d\n", x);//15
    printf("Value of y: %d\n", y); // 10
    printf("Value of *p: %d\n", *p); // 15
    printf("Address of x: %p\n", &x); 
    printf("Address of y: %p\n", &y);
    printf("value of x: %p\n", p);

    return 0;
}