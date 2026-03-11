#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // Declaring a Status Check Variable
    int perfect_status=0;
    // Checking if Number is Perfect Square
    for(int i=1;i<=a;i++)
    {
        // If i^2 is equal to Number, Number is a perfect square
        if(i*i==a)
        {
            perfect_status=1;
            break;
        }
    }
    // If perfect status is 1, Number is a perfect square
    if(perfect_status==1)
        printf("%d is a perfect square",a);
    // If perfect status is 0, Number is not a perfect square
    else
        printf("%d is not a perfect square",a);
}