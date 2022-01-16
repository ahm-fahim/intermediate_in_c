#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "img2.jpeg";
    char *output_file = "girl.jpeg";
    int ch;

    fp_in = fopen(input_file, "rb");
    if (fp_in == NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_out = fopen(output_file, "wb");

    while (1)
    {
        ch = fgetc(fp_in);
        if (ch == EOF)  // EOF - end of file
        {
            break;
        }
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}