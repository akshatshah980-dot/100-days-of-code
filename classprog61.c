#include <stdio.h>
int main()
{
    int arr[5]; //array declaration
    int i,smallest,largest; //variable declaration
    printf("Enter 5 numbers\n");
    for(i=0;i<5;++i)
    {
        scanf("%d", &arr[i]); //number input
    }
    smallest=arr[0];
    largest=arr[0]; //initializing smallest
    for(i=1;i<5;++i)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i]; //updating smallest
        }
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Smallest=%d", smallest);
    printf("Largest=%d", largest);
    return 0;
}