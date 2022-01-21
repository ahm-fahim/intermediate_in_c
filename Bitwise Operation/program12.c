#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n ^ m)
    {
        puts("Number are nto equal\n");
    }
    else
    {
        puts("Number are equal\n");
    }

    return 0;
}