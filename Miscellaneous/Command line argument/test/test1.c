#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, sum = 0, i;

    n = atoi(argv[1]);

    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Result: %d\n", sum);

    return 0;
}