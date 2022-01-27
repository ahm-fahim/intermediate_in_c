#include <stdio.h>

enum DAY
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum DAY today;

    today = THURSDAY;

    switch (today)
    {
    case SUNDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case MONDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case TUESDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case WEDNESDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case THURSDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case FRIDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    case SATURDAY:
        printf("Today is Sunday. It is a work day\n");
        break;
    default:
        printf("I DONT KNOW.");
        break;
    }
}