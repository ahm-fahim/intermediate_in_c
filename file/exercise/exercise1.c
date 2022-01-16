#include <stdio.h>
#include <string.h>

int main()
{
    //variable initialization
    FILE *fp_in, *fp_out;
    char *input_file = "math.txt";
    char *output_file = "total_result.txt";
    int roll, number, num_of_students;
    char line[300];

    //file open and read/write
    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    //reading line by line
    fgets(line, 300, fp_in);

    // scan data
    sscanf(line, "%d %d", &roll, &number);

    // printing output
    if (fp_in == NULL)
    {
        printf("Empty file!!!");
    }
    else
    {
        printf("how many student number you wanna added on the total result file: ");
        scanf("%d", &num_of_students);

        //print on the terminal
        printf("\n\nLine: %s\n", line);
        //print on the file
        fprintf(fp_out, "Roll\t\tNumber\n\n");

        // fprintf(fp_out, "%d\t\t\t%d\n", roll, number);

        for (int i = roll; i <= num_of_students; i++)
        {
            fprintf(fp_out, "%d\t\t\t%d\n", i, number);
            
        }

        //file close
        fclose(fp_in);
        fclose(fp_out);
    }
    return 0;
}