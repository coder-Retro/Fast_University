#include<stdio.h>

// Function Declarations
int stringLength(char str[]);

// Main Function
void main()
{
    char string[100]; // declaring string
    printf("Enter a string : ");
    scanf("%s",string); // reading string
    int answer=stringLength(string); // saving returned value of stringLength function in answer
    printf("Length of %s is %d",string,answer); // displaying answer
}

// Function Definitions
int stringLength(char str[])
{
    int length=0; // declaring length variable
    for(int i=0;str[i]!='\0';i++)
        length++; // counting characters in str
    return length; // returning length
}