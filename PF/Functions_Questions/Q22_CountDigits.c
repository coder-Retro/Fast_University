#include<stdio.h>

// Function Declarations
int countDigits(int a); // Parameters : (1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int number; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    int answer=countDigits(number); // saving returned value of countDigits function in answer
    printf("Number of digits in %d is %d",number,answer); // displaying answer
}

// Function Definitions
int countDigits(int a)
{
    int digits=0; // declaring digits counter variable
    while(a>0)
    {
        digits++; // counting each digit 
        a/=10; // decreasing digits in a
    }
    return digits; // returning digits value
}