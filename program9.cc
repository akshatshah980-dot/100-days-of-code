//Q9: Write a program to input time in seconds and covert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int seconds,hours,minutes,totalseconds;
    printf("Enter Total time in seconds");
    scanf("%d",&totalseconds);
    hours=totalseconds/3600;   //coverting seconds into hours.
    minutes=(totalseconds%3600)/60;   //converting seconds into minutes.
    seconds=totalseconds%60;   //remaining seconds.
    printf("Time in hours:minutes:seconds format is %d:%d:%d\n",hours,minutes,seconds);
    return 0;

}