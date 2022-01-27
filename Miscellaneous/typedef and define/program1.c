
#include <stdio.h>

// #define
#define ip int *
// typedef
typedef int *tip;

int main(int argc, char *argv[])
{
    // #define
    int *a;  // a is an integer pointer
    ip b;    // b is also an integer pointer
    ip c, d; // c is an integer pointer
             // d is only integer

    // typedef
    int *a;   // a is an integer pointer
    tip b;    // b is also integer pointer
    tip c, d; // c and d both are integer pointer

    return 0;
}
