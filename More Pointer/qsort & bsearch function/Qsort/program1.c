/*
    STRUCTURE

    void qsort(void* base, size_t nitems, size_t size, int(*compar)(const void*, const void*));

    EXPLANATION

    void* base - which array will be sort, this 1st items pointer is "base".
    size_t nitems - how many items on this array.
    size_t size - how many space are used on this array, thats decleare on "size".
    int(*compar)(const void*, const void*)) - function pointer.

*/

#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int i, n = 5;
    int values[] = {65, 6, 100, 1, 250};

    qsort(values, 5, sizeof(int), comparefunc);

    for (i = 0; i < n; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}