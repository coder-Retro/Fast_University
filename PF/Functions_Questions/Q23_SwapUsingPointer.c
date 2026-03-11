#include<stdio.h>

// Function Declarations
void swap(int *a,int *b); // Parameters : (2 memory addresses) & Returns : (void)

// Main Function
void main()
{
    int num1,num2; // declaring number variables
    printf("Enter value of num1 : ");
    scanf("%d",&num1); // reading num1
    printf("Enter value of num2 : ");
    scanf("%d",&num2); // reading num2
    printf("Before Swap :\n");
    printf("Value of num1 : %d\nValue of num2 : %d",num1,num2); // displaying values before swap
    swap(&num1,&num2); // calling swap function while passing num1's and num2's addresses as arguments
    printf("\nAfter Swap :\n");
    printf("Value of num1 : %d\nValue of num2 : %d",num1,num2); // displaying values after swap
}

// Function Definitions
void swap(int *a,int *b)
{
    // swapping values using pointers and swap algorithm
    *a = *a + *b; // a = a + b
    *b = *a - *b; // b = a - b
    *a = *a - *b; // a = a - b
}