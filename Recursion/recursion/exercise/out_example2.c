/*
FACTORIAL
    step 1: Divide the problem into smaller sub-problem
    step 2: Specify the base condition to stop the recursion

    CALCULATE FACT(4)

    fact(1) = 1
    fact(2) = 2 * 1          = 2 * fact(1)
    fact(3) = 3 * 2 * 1      = 3 * fact(2)
    fact(4) = 4 * 3 * 2 * 1  = 4 * fact(3)

    fact(n) = n * fact(n-1)


*/

#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    printf("Factorial: %d\n", fact(5));
    return 0;
}