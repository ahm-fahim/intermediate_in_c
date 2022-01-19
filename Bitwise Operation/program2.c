/*
    Value = 9

    64  32  16  8   4   2   1
                1   0   0   1    = 9  //  << 0 left
            1   0   0   1   0    = 18 //  << 1 left
        1   0   0   1   0   0    = 36 //  << 2 left
    1   0   0   1   0   0   0    = 72 //  << 3 left
        1   0   0   1   0   0    = 36 //  >> 2 Right
            1   0   0   1   0    = 18 //  >> 1 Right
                1   0   0   1    = 9  //  >> 0 Right

*/

#include <stdio.h>

int main()
{
    int n, x1, x2, m, r;

    while (1)
    {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }
        printf("How many bit you want to shift left? ");
        scanf("%d", &x1);

        printf("How many bit you want to shift Right? ");
        scanf("%d", &x2);

        m = n << x1;
        r = n >> x2;

        printf("Left shift is %d\n", m);
        printf("Right shift is %d\n\n", r);
    }

    return 0;
}