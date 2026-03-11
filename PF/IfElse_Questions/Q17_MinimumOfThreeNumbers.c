#include<stdio.h>
void main()
{
    // Declaring Number Variables
    int a;
    int b;
    int c;
    // Reading Input for Numbers
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    // Declaring Minimum Variable
    int min;
    // Checking Minimum
    if(a<b)
    {
        // a is minimum
        if(a<c)
            min=a;
        // c is minimum    
        else
            min=c;
    }
    else if(b<a)
    {
        // b is minimum
        if(b<c)
            min=b;
        // c is minimum
        else
            min=c;
    }
    // c is minimum
    else
        min=c;
    // Displaying Minimum
    printf("Minimum is %d",min);
}