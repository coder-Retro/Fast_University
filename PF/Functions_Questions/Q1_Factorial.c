#include<stdio.h>
#include<math.h>

// Function Declarations
int factorial(int a); // Parameters : (1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int number; // declaring variable for number
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    number=abs(number); // taking absolute to avoid negative inputs
    int answer=factorial(number); // saving returned value of factorial function in answer
    printf("Factorial of %d is %d",number,answer); // displaying answer
}

// Function Definitions
int factorial(int a)
{
    int fact=1; // declaring multiplicative identity "1" in fact for factorial calculation
    for(int i=1;i<=a;i++)
        fact*=i; // calculating facotorial of a
    return fact; // returning factorial of a
}