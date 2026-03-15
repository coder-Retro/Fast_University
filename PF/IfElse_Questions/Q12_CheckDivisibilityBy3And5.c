#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input for Number
    printf("Enter a number : ");
    scanf("%d",&a);
    // If Divisible by 3 and 5
    if(a%3==0&&a%5==0)
        printf("%d is divisible by 3 and 5",a);
    // If not Divisible by 3 and 5
    else
        printf("%d is not divisible by 3 and 5",a);
}