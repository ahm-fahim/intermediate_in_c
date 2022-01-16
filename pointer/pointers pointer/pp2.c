#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("Value of C: %c\n", c);
    printf("Value of C: %c\n", *p);
    printf("Value of C: %c\n", **q);

    return 0;
}