
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    int len=0,i;
    for(i=0;i<20;i++)
    {
        if(str[i]=='\0')
        {
            break;
        }
        len++;
    }
    len--;
    printf("The length of the string is: %d\n",len);
    return 0;
}