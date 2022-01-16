#include <stdio.h>

int main()
{
    int ara[5] = {50, 60, 70, 80, 90};

    printf("Value of Arra: %d, %d, %d, %d, %d\n\n", ara[0], ara[1], ara[2], ara[3], ara[4]);

    printf("Address of ara : %p \n\n", ara);

    printf("Address of ara[0] : %p\n", ara[0]);
    printf("Address of ara[1] : %p\n", ara[1]);
    printf("Address of ara[2] : %p\n", ara[2]);
    printf("Address of ara[3] : %p\n", ara[3]);
    printf("Address of ara[4] : %p\n", ara[4]);

    return 0;
}