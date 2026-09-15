#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    int start=0;
    int end =5-1;
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("The reversed array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}