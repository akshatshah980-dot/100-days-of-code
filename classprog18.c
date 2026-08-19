#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d ,root1 ,root2;// Variables to store the cofficients , discriminant and roots
    printf("Enter the a ,b,c");
    scanf("%f %f %f", &a,&b,&c);
    d=b*b-4*a*c; // calculate the discriminant
    if(d>0)
    {
        root1=(-b+sqrt(d))/2*a; //calculat first root
        root2=(-b-sqrt(d))/2*a; //calculate second root
        printf("Two real and different roots: %.2f %.2f", root1 , root2);

    }
    else if(d==0)
    {
        root1=-b/(2*a); //calculate the root
        printf("Two real and equal roots: %.2f", root1);
    }
    else
    {
        printf("complex roots");

    }
    return 0;

    
}