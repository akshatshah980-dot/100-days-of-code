
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (name[i + 1] != '\0' && name[i + 1] != ' ')
            {
                printf("%c.", name[i]);
            }
            else
            {
                printf("%s", &name[i]);
                break;
            }
        }
    }
    return 0;
}