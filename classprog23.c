#include <stdio.h>
int main()
{
    int days,fine=0;  //variable declaration
    printf("Enter no of days late");
    scanf("%d",&days);
    if(days<=5)
    {
        fine=days*2; //calculate fine
        printf("The fine is:Rs %d",fine);
        }
        else if(days<=10) //fine for 6-10 days
        {
            fine=(5*2)+(days-5)*4;
            printf("The fine is: Rs %d", fine);
        }
        else if(days<=20) //fine for 11-20 days
        {
            fine=(5*2)+(5*4)+(days-10)*6;
            printf("The fine is: Rs %d", fine);
        }
        else
        {
            printf("Membership cancelled"); //after 20 days
        }
        return 0;


}