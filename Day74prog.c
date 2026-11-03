
#include <stdio.h>
int main()
{
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    int ch;
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Could not open source file %s\n", sourceFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Could not open destination file %s\n", destFile);
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);
    return 0;
}
