#include<stdio.h>
void main()
{
    int x; // declaring number variable
    printf("Enter value of x : ");
    scanf("%d",&x); // reading x
    int *a; // declaring pointer a
    a=&x; // assigning address of integer x to pointer a
    printf("\n*a : %d (value at address saved in pointer a)",*a);
    printf("\na : %p (address saved in pointer a)",a);
    printf("\n&a : %p (address of pointer a)",&a);
    int **b; // declaring double pointer b
    b=&a; // assigning address of pointer a to double pointer b
    printf("\n**b : %d (value saved at address saved in pointer a)",**b);
    printf("\nb : %p (address saved in double pointer b)",b);
    printf("\n&b : %p (address of double pointer b)",&b);
}