#include <stdio.h>
int main()
{
    int arr[5],i,arr1[5],merge[10],k=0;
    printf("Enter elements in 1st array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("Enter elements in second array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        merge[k]=arr[i];
        k++;

    }
    for(i=0;i<5;i++)
    {
        merge[k]=arr1[i];
        k++;
    }
    printf("The merged array is\n");
    for(i=0;i<10;i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;

}