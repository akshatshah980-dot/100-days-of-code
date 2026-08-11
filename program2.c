//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int sum;
    int diff;
    int pro;
    int quo;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    sum=n1+n2;
    diff=n1-n2;
    pro=n1*n2;
    quo=n1/n2;
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("product=%d\n",pro);
    printf("quo=%d\n",quo);
    return 0;

}