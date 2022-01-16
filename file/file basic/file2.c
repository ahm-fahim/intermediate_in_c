#include <stdio.h>

int main()
{
    FILE *fp;

    char filename[] = "my_file2.txt";
    fp = fopen(filename, "w");

    fprintf(fp, "This file is created by program 2.\n");
    fprintf(fp, "I am happy!\n");

    fclose(fp);
    fprintf(fp, "After fclose.\n");

    fp = fopen(filename, "a");
    fprintf(fp, "After append .\n");

    fclose(fp);

    return 0;
}