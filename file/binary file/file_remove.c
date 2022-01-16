#include <stdio.h>

int main()
{
    int return_value;
    char *filename = "img2.jpeg";

    return_value = remove(filename);

    if (return_value != 0)
    {
        perror("File Remove Failed");
        return 1;
    }

    printf("%s removed successfully\n", filename);

    //now try to remove again
    return_value = remove(filename);

    if (return_value != 0)
    {
        perror("File Remove Failed");
        return 1;
    }
    printf("%s removed successfully\n", filename);

    return 0;
}
