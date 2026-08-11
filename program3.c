
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>
int main()
{
    double length;
    double breadth;
    double area;
    double peri;
    printf("Enter the lenth of the rectangle:");
    scanf("%lf",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%lf",&breadth);
    area=length*breadth;
    peri=2*(length+breadth);
    printf("Area=%lf\n",area);
    printf("perimeter=%lf\n",peri);
    return 0;
}