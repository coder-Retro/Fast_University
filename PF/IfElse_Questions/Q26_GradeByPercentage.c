#include<stdio.h>
void main()
{
    // Declaring Percentage Variable
    float percentage;
    // Reading Input for Percentage
    printf("Enter percentage : ");
    scanf("%f",&percentage);
    // If 0 <= Percentage <=100, Input is valid
    if(percentage>=0&&percentage<=100)
    {
        // Printing Grade to Coressponding Percentage
        if(percentage>=90)
            printf("Your Grade is A+");
        else if(percentage>=80)
            printf("Your Grade is A");
        else if(percentage>=70)
            printf("Your Grade is B");
        else if(percentage>=60)
            printf("Your Grade is C");
        else if(percentage>=50)
            printf("Your Grade is D");
        else
            printf("Your Grade is F");
    }
    // Input is invalid
    else
        printf("Invalid Input !");
}