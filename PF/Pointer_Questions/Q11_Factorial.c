#include<stdio.h>
void main()
{
    int a; // declaring number variable
    printf("Enter a number : ");
    scanf("%d",&a); // reading a
    int *p; // declaring pointer
    p=&a; // assigning address of a to pointer p
    int factorial=1; // initialising factorial with multiplicative identity "1"
    for(;*p>=1;*p-=1)
    {
        factorial *= (*p); // calculating factorial
    }
    printf("Factorial : %d",factorial); // writing factorial
}