#include <stdio.h>
int main()
{
    int arr[5]; //array declaration
    int i,search , found=0; //variable declaration
    
    printf("Enter the array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);   //array element input
     }
     printf("Enter the element to be searched\n");
    scanf("%d", &search); //search element input
     for(i=0;i<5;++i)
     {
        if(arr[i]==search)
        {
        found=1; //element found
        break;
        }
     }
     if(found==1)
     {
        printf("Element found at index=%d", i); //element found at index
     }
     else
     {
        printf("Not found");
     }
     return 0;
}