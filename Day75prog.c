
#include <stdio.h>
int main()
{
    FILE *file;
    char text[100];

    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
