#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "in2.txt";
    char *output_file = "out2.txt";

    char line[80];
    int num1, num2,num3,num4, sum,sum2;

    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    fgets(line, 80, fp_in);
    printf("Line: %s\n", line);

    sscanf(line, "%d %d %d %d",&num1, &num2, &num3, &num4);

    sum = num1 + num2;
    sum2 = num3 + num4;


    printf("%d %d %d\n", num3, num4, sum2);
    fprintf(fp_out, "%d\n", sum2);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}