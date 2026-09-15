#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLOMNS 10
int main()
{
    int i,j,rows , coloumns;
    printf("Enter the size of rows and coloumns");
    scanf("%d %d", &rows ,&coloumns);
     int mat[MAX_ROWS][MAX_COLOMNS],trans[MAX_COLOMNS][MAX_ROWS];
    if(rows<1||rows>MAX_ROWS||coloumns<1||coloumns>MAX_COLOMNS)
    {
        printf("Invalid input");
        return 1;
    }
    printf("Enter the elements\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
    for(i=0;i<coloumns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}