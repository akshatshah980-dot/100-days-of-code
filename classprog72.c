#include <stdio.h>
int main()
{
    int i, n=0,k=3; // Variable declaration for loop counter and number of terms
    double sum=0.0; // Variable declaration for sum of the series
    printf("enter the number where you want to calculate sum of series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(double)(2*i)/(k); // Adding the terms of the series
        k=k+4; // Incrementing the denominator for the next term


    }
    printf("the sum of the series is: %lf\n", sum);
    return 0;
}