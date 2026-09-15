#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<18;i++)
    {
        if(i==2||i==6||i==12||i==16)
        {
            printf("\n");
        }
        else
        {
            printf("*");
            printf("\n");
        }
    }
    return 0;
}