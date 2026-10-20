
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the rows and column for matrix seprated by a comma\n");
    scanf("%d,%d",&r,&c);
    int M1[r][c];
    int M2[r][c];
    int i,j;

    printf("Elements of the first matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for %d row %d column position\n",i+1,j+1);
            scanf("%d",&M1[i][j]);
        }
    }

    printf("Elements of the second matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for %d row %d column position\n",i+1,j+1);
            scanf("%d",&M2[i][j]);
        }
    }
    
    int M[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            M[i][j]=M1[i][j]+M2[i][j];
        }
    }

    printf("The resultant Matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}