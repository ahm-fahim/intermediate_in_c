#include <stdio.h>
#include <stdio.h>

struct nameType
{
    char first[20];
    char last[20];
};

struct student
{
    int id;
    struct nameType name;
};

main()
{
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", one.name.first);
    scanf("%s", one.name.last);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}
