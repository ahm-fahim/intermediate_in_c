#include <stdio.h>
#include <string.h>

void reverse(char *input, int begin, int end)
{
    char temp;

    if (begin >= end)
    {
        return;
    }

    temp = *(input + begin);
    *(input + begin) = *(input + end);
    *(input + end) = temp;

    reverse(input, ++begin, --end);
}

int main()
{
    char s[100];
    scanf(" %[^\n]", s);

    reverse(s,0,strlen(s)-1);
    printf("%s", s);
    return 0;
}