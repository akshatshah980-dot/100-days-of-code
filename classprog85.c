#include <stdio.h>
int main()
{
    int arr[5],i,cp=0,cn=0,c=0;
    printf("Enter array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>0)
        {
            cp++;
        }
        else if(arr[i]<0)
        {
            cn++;
        }
        else
        {
            c++;
        }

    }
    printf("Positive=%d\n", cp);
    printf("Negative=%d\n", cn);
    printf("Zeros=%d", c);
    return 0;

}