
#include<stdio.h>
int main()
{
    int n,i,j,target,found=0;
    int nums[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter the target: ");
    scanf("%d",&target);
    for(i=0;i<n && !found;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d %d\n",i,j);
                found=1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("-1 -1\n");
    }
    return 0;
}