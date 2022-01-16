#include <stdio.h>

void str_match(char S, int I)
{
    if (S == I)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

int main()
{
    int x = 10;
    int z = 10;
    char y = 'c';
    str_match(x, z);
    return 0;
}