#include <stdio.h>
int main()
{
    int i,n=0; // Variable declaration for loop counter, number of terms, and denominator increment
    double sum=0.0;
printf("Enter the number where you want to calculate sum of series\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i==1)
    {
        sum+=1.0; // Adding the first term of the series
    }
    else
    {
    for(i=2;i<=n;i++)
    {
        sum=sum+((double)(2*i-1)/(double)(2*i)); // Adding the subsequent terms of the series
    }

}
}
printf("Sum of the series is: %lf\n", sum);
return 0;
}
