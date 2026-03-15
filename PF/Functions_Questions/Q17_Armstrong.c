#include<stdio.h>
#include<stdbool.h>

// Function Declarations
bool isArmstrong(int a); // Parameters : (1 integer) & Returns : (true or false)

// Main Function
void main()
{
    int number; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&number); // reading number
    bool answer=isArmstrong(number); // saving returned value of isArmstrong function in answer
    printf("%d is %s",number,(answer==true)?"an Armstrong Number":"not an Armstrong Number"); // displaying answer
}

// Function Definitions
bool isArmstrong(int a)
{
    int digits=0; // declaring digit counter variable
    int copy=a; // making copy of a to preserve original value of a
    while(copy>0) // counting digits using copy of a
    {
        digits++; // counting digits
        copy/=10; // decreasing digits
    }
    copy=a; // restoring copy
    int sum=0; // declaring sum variable
    int power; // declaring power variable
    for(int i=1;i<=digits;i++)
    {
        power=1; // setting power to multiplicative identity "1"
        for(int j=1;j<=digits;j++)
        {
            power*=(copy%10); // calculating power of current digit
        }
        sum+=power; // summing power in sum
        copy/=10; // decreasing digit
    }
    if(sum==a) // if sum is equal to original number a
        return true; // a is armstrong
    else // if sum is not equal to original number a
        return false; // a is not armstrong
}