#include<stdio.h>
void main()
{
    // Declaring Three Variables for Numbers Input
    int a,b,c;
    // Reading Number Inputs
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    // Declaring largest Variable
    int largest;
    // Checking & Updating largest
    if(a>b)
    {
        // a is largest
        if(a>c)
            largest=a;
        // c is largest
        else
            largest=c;
    }
    else if(b>a)
    {
        // b is largest
        if(b>c)
            largest=b;
        // c is largest
        else
            largest=c;
    }
    // c is largest
    else
        largest=c;
    // Writing Largest
    printf("Largest is %d",largest);
}