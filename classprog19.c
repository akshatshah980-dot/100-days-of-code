#include <stdio.h>
int main()
{
    int a,b,c; // sides of a triangle
    printf("Enter thethree sides of a triangle");
    scanf("%d %d %d", &a , &b , &c);
    if(a==b&&b==c) //check for equilateral triangle
    {
        printf("It is an equilateral triangle");
    }
    else if(a==b || b==c||a==c) //check for isoceles triangle
    {
        printf("It is an isoceles triangle");
    }
    else
    {
        printf("It is a scalene triangle");
    }
    return 0;
}