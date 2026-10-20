
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and column seperated by a comma\n");
    scanf("%d,%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for %d row %d coulmn number\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    int flag=0;
    for(i=0;i<r-1;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(arr[i][i]==arr[j][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
    return 0;
}