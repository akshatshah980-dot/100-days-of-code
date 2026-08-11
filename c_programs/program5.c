//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    const float pi=3.14;
    float radius;
    float cir;
    float area;
    printf("Enter the radius of the circle");
    scanf("%f",&radius);
    area=pi*radius*radius;
    cir=2*pi*radius;
    printf("Area=%f\n",area);
    printf("circumference=%f\n",cir);
    return 0;

}