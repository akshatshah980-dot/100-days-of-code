
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            printf("\t\n");
        }
        else
        {
            printf("%c\n",str[i]);
        }
        i++;
    }
    return 0;
}