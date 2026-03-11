#include<stdio.h>

// Function Declarations
int power(int a,int b); // Parameters : (2 integers) & Returns : (2 integers)

// Main Function
void main()
{
    int base,exponent; // declaring variables
    printf("Enter Base : ");
    scanf("%d",&base); // reading base
    printf("Enter Exponent : ");
    scanf("%d",&exponent); // reading exponent
    int answer=power(base,exponent); // saving returned value of power function in answer
    printf("Answer : %d",answer); // displaying answer
}

// Function Definitions
int power(int a,int b)
{
    int final=1; // declaring multiplicative identity "1"
    for(int i=1;i<=b;i++)
    {
        final*=a; // multipliplying a with itself b-1 times (calculating power)
    }
    return final; // returning final value
}