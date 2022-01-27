#include <stdio.h>

enum COLOR
{
    NO_COLOR = 0,
    RED = 40,
    GREEN = 44,
    BLUE = 60
};

int main()
{
    printf("value: %d\n", NO_COLOR);
    printf("value: %d\n", RED);
    printf("value: %d\n", GREEN);
    printf("value: %d\n", BLUE);

    return 0;
}