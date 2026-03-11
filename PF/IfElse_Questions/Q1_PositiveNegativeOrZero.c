#include<stdio.h>
void main()
{
    // Declaring Variable
    int a;
    // Reading Input
    printf("Enter value of a : ");
    scanf("%d",&a); 
    // if a is less than 0 (negative)
    if(a<0)
    {
        printf("a(%d) is negative .",a);
    }
    // if a is equal to 0 (Neutral)
    else if(a==0)
    {
        printf("a(%d) is zero .",a);
    }
    // a is greater than 0 (positive)
    else 
    {
        printf("a(%d) is positive .",a);
    }
}