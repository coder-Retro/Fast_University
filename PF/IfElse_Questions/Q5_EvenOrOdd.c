#include<stdio.h>
void main()
{
    // Declaring Number Variable
    int a;
    // Reading Input of Number
    printf("Enter any integer : ");
    scanf("%d",&a);
    // If Divisible by 2 then Even
    if(a%2==0)
        printf("%d is Even .",a);
    // If not Divisible by 2 then Odd
    else
        printf("%d is Odd .",a);
}