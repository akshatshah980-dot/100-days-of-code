#include <stdio.h>
int main()
{
    int i,j,rows,coloumns;
    printf("Enter the number of rows and coloumns");
    scanf("%d %d", &rows , &coloumns);
    int matrix[rows][coloumns];
    printf("Enter the matrix\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The Matrix is=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");

    }
    return 0;
}