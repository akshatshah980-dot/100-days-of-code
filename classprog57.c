#include <stdio.h>
int main()
{
    int arr[5]; // Array declaration
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]); //number input
    }
    printf("The numbers are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]); //printing the numbers
    }
    return 0;
}