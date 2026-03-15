#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // Declaring Required Variables
    int digits=0;
    int copy=a;
    int digit;
    long long power;
    long long sum=0;
    // Counting Digits
    while(copy>0)
    {
        digits++;
        copy/=10;
    }
    // Resetting Copy
    copy=a;
    // Calculating Sum of Power of Each Digit
    for(int i=1;i<=digits;i++)
    {
        power=1;
        digit=copy%10;
        copy/=10;
        for(int i=1;i<=digits;i++)
        {
            power*=digit;
        }
        sum+=power;
    }
    // If sum is equal to a, a is amrstrong
    if(sum==a)
        printf("%d is Armstrong Number",a);
    // If sum is not equal to a, a is not armstrong
    else
        printf("%d is not Armstrong Number",a);
}