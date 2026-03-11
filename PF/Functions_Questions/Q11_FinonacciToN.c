#include<stdio.h>
#include<math.h>

// Function Declarations
void fibonacci(int n); // Parameters : (1 integer) & Returns : (void)

// Main Function
void main()
{
    int number; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    number=abs(number); // taking absolute to avoid negative inputs
    fibonacci(number); // calling fibonacci function while passing number as arguement
}

// Function Definitions
void fibonacci(int n)
{
    // using long long and %lld because fibonacci series has really large values that int can't hold
    long long a=0; // first term
    long long b=1; // second term
    long long c; // next term
    for(int i=1;i<=n;i++)
    {
        if(i==1) // first iteration
            printf("%lld ",a); // displaying a
        else if(i==2) // second iteration
            printf("%lld ",b); // displaying b
        else // remaining iterations
        {
            c=a+b; // updating c tp a+b
            printf("%lld ",c); // displaying c
            a=b; // updating a to b
            b=c; // updating b to c
        }
    }
}