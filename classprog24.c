#include <stdio.h>
int main()
{
    int units; // variable declaration
    float bill;
    printf("Enter the units");
    scanf("%d",&units);
    if(units<=100)  //bill calculation for less than 100
    {
        bill=units*5;
        printf("The bill is: Rs %.2f", bill);
    }
    else if(units<=200) //bill calculation for 101-200
    {
        bill=(100*5)+(units-100)*7;
        printf("The bill is: Rs %.2f",bill);

    }
    else if(units<=300) //bill calculation for 201-300
    {
        bill=(100*5)+(100*7)+(units-200)*10;
        printf("The bill is: Rs %.2f", bill);

    }
    else //calculation for more than 300
    {
        bill= (100*5)+(100*7)+(100*10)+(units-300)*12;
        printf("The bill is:Rs %.2f", bill);
    }
    return 0;

}