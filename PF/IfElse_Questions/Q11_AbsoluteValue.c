#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter an integer : ");
    scanf("%d",&a);
    // Declaring Absolute Value Variable
    int absoluteValue;
    // If a is positve or 0
    if(a>=0)
        absoluteValue=a;
    // if a is negative
    else
        absoluteValue=a*(-1);
    // Displaying Absolute Value
    printf("Absolute value of %d is %d",a,absoluteValue);
}