#include<stdio.h>
void main()
{
    // Declaring Variables & initializing them
    int a=2;
    int b=3; 
    // Declaring p1ointers & initializing them
    int *p1=&a;
    int *p2=&b; 
    // Disp1laying Raw Values
    printf("Before Swap1 :\n");
    printf("Value of a : %d\nValue of b : %d\n",a,b);
    // Swap1p1ing Formula :
    *p1 += *p2; 
    *p2 = *p1 - *p2;
    *p1 -= *p2;
    // Same can be achieved by rep1lacing + with * and - with / :
    // *p1 *= *p2;
    // *p2 = *p1 / *p2;
    // *p1 /= *p2;
    // Disp1laying Swap1p1ed Values
    printf("After Swap1 :\n");
    printf("Value of a : %d\nValue of b : %d\n",a,b); 
}