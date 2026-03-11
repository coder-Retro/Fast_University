#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int age;
    // Reading Input for Number
    printf("Enter age : ");
    scanf("%d",&age);
    // If age is negative, input is invalid
    if(age<0)
        printf("Invalid Input");
    // Age is less than 18, Not eligible to vote
    else if(age<=17)
        printf("Not Eligible to Vote");
    // Age is about 17, Eligible to vote
    else
        printf("Eligible to Vote");
}