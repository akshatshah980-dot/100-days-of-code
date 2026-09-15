#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the elemrnts in the array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c1=0,c2=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
        }
        else{
            c2++;
        }
    }
    printf("Even=%d\n", c1);
    printf("Odd=%d", c2);
    return 0;
}