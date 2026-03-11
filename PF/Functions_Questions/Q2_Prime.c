#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// Function Declarations
bool isPrime(int a); // Parameters : (1 integer) & Returns : (true or false)

// Main Function
void main()
{
    int number; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    number=abs(number); // taking absolute to avoid negative inputs
    printf("%d is %s",number,(isPrime(number)==true)?"Prime":"Composite"); // displaying result using isPrime function
}

// Function Definitions
bool isPrime(int a)
{
    for(int i=2;i<a;i++) // starting i from 2 becuz every number is divisible on 1 so skipping 1
    {
        if(a%i==0) // checking for divisibility by numbers less than a
        {
            return false; // number got divided, hence returning false
        }
    }
    return true; // number didnt get divided, hence returning true
}