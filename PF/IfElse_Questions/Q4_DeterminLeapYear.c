#include<stdio.h>
void main()
{
    // Declaring Year Variable
    int year;
    // Reading Year Input
    printf("Enter year : ");
    scanf("%d",&year);
    // Checking if Year is Leap
    if(year%4==0)
    {
        // If Divisible by 100 then not leap unless also Divisible by 400
        if(year%100==0)
        {
            // If Divisible by 400 then leap
            if(year%400==0)
            {
                printf("%d is leap year .",year);
            }
            // If not Divisible by 400 then not leap
            else
            {
                printf("%d is not a leap year .",year);
            }
        }
        // If not Divisible by 100 then leap
        else
        {
            printf("%d is leap year .",year);
        }
    }
    // if not Divisible by 4 then not leap
    else
    {
        printf("%d is not a leap year .",year);
    }
}