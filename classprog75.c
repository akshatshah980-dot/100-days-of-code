#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLMNS 10
int main()
{
    int i,j ,rows, coloumns,sum=0;
    float avg=0.0;
    printf("Enter the size of rows and coloumns");
    scanf("%d %d", &rows , &coloumns);
    int matrix[rows][coloumns];
    if(rows<1||rows>MAX_ROWS||coloumns<1||coloumns>MAX_COLMNS)
    {
        printf("Invalid input");
        return 1;
    }
    printf("Enter the elements\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
        }
    }


    printf("The sum of the matrix is=%d\n",sum);

    return 0;

}