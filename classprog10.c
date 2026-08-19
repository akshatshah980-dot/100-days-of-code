#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks"); //INPUT MARKS
    scanf("%d",&marks);
    if(marks>=90) //CHECK GRADES
    {
        printf("Grade A");
    }
    else if(marks>=75)
    {
        printf("Grade B");
    }
    else if (marks >=60)
    {
        printf("Grade c");
    }
    else if (marks >=40)
    {
        printf(" Grade D");
    }
    else 
    {
        printf("Grade F");
    }
    return 0;
}