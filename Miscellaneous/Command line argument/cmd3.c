/*
    gcc filename.ext
    ./a.out Name
    please enter one argument (your name)

    ./a.out Name

    ./a.out "Name Name"

    gcc filename.ext -o prog.out

    gcc

    clang: error : no input file
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Please enter one argument (your name)\n");
        return 1;
    }
    printf("Welcome %s\n", argv[1]);

    return 0;
}