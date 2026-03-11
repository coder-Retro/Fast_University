#include<stdio.h>

// Function Declarations
int largestNum(int a,int b,int c); // Parameters : (3 integers) & Returns : (largest integer)

// Main Function
void main()
{
    int num1,num2,num3; // declaring number variables
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3); // reading numbers
    int answer=largestNum(num1,num2,num3); // saving return value of largestNum function in answer
    printf("Largest is %d",answer); // diplaying answer
}

// Function Definitions
int largestNum(int a,int b,int c)
{
    if(a>b) // if a is greater than b
    {
        if(a>c) // if a is greater than c
            return a; // returning a
        else // if a is less than or equal to c
            return c; // returning c
    }
    else // if a is less than or equal to b
    {
        if(b>c) // if b is greater than c
            return b; // returning b
        else // if b is less than or equal to c
            return c; // returning c
    }
}