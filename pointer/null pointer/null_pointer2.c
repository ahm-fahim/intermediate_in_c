#include <stdio.h>

int main(){
    int x = 100;
    int *p = NULL;

    printf("value of x: %d\n", x);
    p = &x;
    printf("value of *p: %d\n", *p);

    return 0;
}