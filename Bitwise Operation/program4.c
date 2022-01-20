/*
    5 = 0101
    6 = 0110
  5|6 = 0111 = 7
*/

#include <stdio.h>

int main()
{
    int n1 = 5, n2 = 6, n3;

    n3 = n1 | n2;

    printf("%d | %d = %d\n", n1, n2, n3);

    return 0;
}