#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // Declaring & Initializing Factors Variable
    int factors=0;
    // Counting Factors using loop
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            factors++;
    }
    // Prime Numbers only have two factors (1 and itself)
    if(factors==2)
        printf("%d is prime",a);
    // If factors are more than 2, number is composite
    else
        printf("%d is composite",a);
}