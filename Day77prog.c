
#include <stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - ('a' - 'A'); 
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
