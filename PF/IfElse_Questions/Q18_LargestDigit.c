#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // Declaring and Initializing LargestDigit Variable
    int largestDigit=0;
    // Checking Digits
    while(a>0)
    {   
        // Updating largestDigit if a%10 > largestDigit
        if(a%10>largestDigit)
            largestDigit=a%10;
        a/=10;
    }
    // Displaying Largest Digit
    printf("Largest Digit is %d",largestDigit);
}