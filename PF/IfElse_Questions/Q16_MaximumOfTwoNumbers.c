#include<stdio.h>
void main()
{
    // Declaring Number Variables
    int a;
    int b;
    // Reading Input for Numbers
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    // If 1st number is greater
    if(a>b)
        printf("%d is greater",a);
    // If 2nd number is greater
    else
        printf("%d is greater",b);
}