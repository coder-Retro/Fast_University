#include<stdio.h>

// Function Declarations
int gcd(int a,int b); // Parameters : (2 integers) & Returns : (1 integer)

// Main Function
void main()
{
    int num1,num2; // declaring number variables
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2); // reading numbers
    int answer=gcd(num1,num2); // saving returned value of gcd function in answer
    printf("GCD of %d & %d is %d",num1,num2,answer); // displaying answer
}

// Function Definitions
int gcd(int a,int b)
{
    // technique used below is called Euclidean Algorithm
    if(a>b) // if a is greater than b
        return gcd(a-b,b); // returning gcd(a-b,b)
    else if(b>a) // if b is greater than a
        return gcd(a,b-a); // returning gcd(a,b-a)
    else // if a is equal to b
        return a; // returnign a (greatest common devisor)
}