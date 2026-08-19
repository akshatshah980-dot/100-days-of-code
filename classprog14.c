#include <stdio.h>
int main()
{
    int year; // VARIABLE TO STORE THE YEAR
    printf("Enter the year");
    scanf("%d",&year);
    if(year%400==0) //CHCEK IF IT IS DIVIDED BY 400
    {
        printf("Leap year");
    }
    else if(year%4==0 && year%100!=0) //CHECK IF IT IS DIVIDED BY 4 AND NOT DIVIDED BY 100
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}