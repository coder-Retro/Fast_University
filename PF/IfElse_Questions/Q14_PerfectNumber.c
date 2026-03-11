#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // Declaring Sum Of Factors Variable
    int sum_of_factors=0;
    // Calculating Sum of factors using loop
    for(int i=1;i<a;i++)
    {
        // Checking Factors
        if(a%i==0)
            sum_of_factors+=i;
    }
    // If sum of factors is equal to number, number is perfect
    if(sum_of_factors==a)
        printf("%d is a perfect number",a);
    // If sum of factors is not equal to number, number is not perfect
    else
        printf("%d is not a perfect number",a);
}