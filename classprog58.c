#include <stdio.h>
int main()
{
    int i,sum=0,arr[5]; //VARIABLE DECLARATION
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]); //READING THE NUMBERS FROM THE USER

    }
    for(i=0;i<5;i++)
    {
        sum+=arr[i]; //ADDING THE NUMBERS
    }
    printf("The sum is: %d\n", sum);
    return 0;
}