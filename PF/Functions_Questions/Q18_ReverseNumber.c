#include<stdio.h>

// Function Declarations
int reverseNum(int a); // Parameters : (1 integer) & Returns : (1 integer)

// Main Function
void main()
{
    int number; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    int answer=reverseNum(number); // saving returned value of reverseNum function in answer
    printf("Reversed of %d is %d",number,answer); // displaying answer
}

// Function Definitions
int reverseNum(int a)
{
    int reversed=0; // declaring variable for reverse of number
    while(a>0)
    {
        reversed=reversed*10+a%10; // reversing a
        a/=10; // decreasing a
    }
    return reversed; // returning reversed number
}