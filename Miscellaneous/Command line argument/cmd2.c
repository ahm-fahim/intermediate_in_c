/*
    gcc filename.ext -o prog.out
    ./prog.out
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[])
{
    printf("Argument count : %d\n", argc);
    printf("First argument: %d\n", argv[0]);

    return 0;
}