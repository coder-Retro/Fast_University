#include<stdio.h>
#include<string.h>

// Function Declarations
void reverseString(char str[]); // Parameters : (1 char array) & Returns : (void)

// Main Function
void main()
{
    char string[100];
    printf("Enter a string : ");
    scanf("%s",string); // reading string
    reverseString(string); // reversing string using reverseString function
    printf("Reversed String is %s",string); // displaying reversed string
}

// Function Definitions
void reverseString(char str[])
{
    char *a,*b; // declaring pointers for reversing string
    a=&str[0]; // initialising a pointer with base address of string
    b=&str[strlen(str)-1]; // initialising b pointer with last address of string
    for(;a<b;a++,b--)
    {
        // swapping algorithm using pointers to reverse string
        *a = *a + *b; // a = a + b
        *b = *a - *b; // b = a - b
        *a = *a - *b; // a = a - b
    }
    // string has been reversed
}