#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLMNS 10
int main()
{
    int i,j,rows,coloumns,sumR;
    int sum[MAX_ROWS]; 
    printf("Enter the size of rows and coloumns");
    scanf("%d %d",&rows , &coloumns);
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
        }

    }
    //Calculating sum of each row
    for(i=0;i<rows;i++)
    {
        sumR=0;
        for(j=0;j<coloumns;j++)
        {
            sumR+=matrix[i][j];
        
        }
        sum[i]=sumR;
    }
    printf("The sum array is\n");
    for(i=0;i<rows;i++)
    {
        printf("%d ", sum[i]);
    }
    
    return 0;

}