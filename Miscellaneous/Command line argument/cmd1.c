/*
    step-1: gcc cmd1.c -o sum.out
    step-2: ./sum.out 5 7
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // argument count , argument vector
{

    int n1, n2, sum;

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    sum = n1 + n2;

    printf("%d + %d = %d\n", n1, n2, sum);

    return 0;
}