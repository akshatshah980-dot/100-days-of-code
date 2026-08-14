//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float pri,rate,time,si,ci;
    pri=10000.0;
    rate=5.0;
    time=2.0;
    si=(pri*rate*time)/100;
    ci=pri*pow((1+(rate/100)),time)-pri;
    printf("Simple intrest is:%f\n", si);
    printf("Compound intrest:%f\n", ci);
    return 0;
}