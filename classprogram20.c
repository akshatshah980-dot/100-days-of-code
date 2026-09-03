#include <stdio.h>
int main()
{
    int day; //variable declaration
    printf("Enter the number (1-7):");
    scanf("%d", &day);
    switch(day) //switch case for day number
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wewdnesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default: //default case for invalid number
        {
        
        
            printf("Wrong input");
        }
    }
    return 0;
}