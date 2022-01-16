#include <stdio.h>

int main()
{
    char ch1 = 'A', ch2 = 'B';

    int n1 = 100, n2 = 100000;

    printf("value of ch1 = %c\t", ch1);
    printf("address of ch1 = %p\n", ch1);

    printf("value of ch2 = %c\t", ch2);
    printf("address of ch2 = %p\n", ch2);

    printf("value of n1 = %d\t", n1);
    printf("address of n1 = %p\n", n1);

    printf("value of n2 = %d\t", n2);
    printf("address of n2 = %p\n\n", n2);

    return 0;
}