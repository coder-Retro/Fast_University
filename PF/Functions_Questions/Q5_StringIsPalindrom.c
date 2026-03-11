#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// Function Declarations
bool stringIsPalindrome(char str[]); // Parameters : (1 char array) & Returns : (true or false)

// Main Function
void main()
{
    char string[100]; // declaring string
    printf("Enter a string : ");
    scanf("%s",string); // reading string
    bool answer=stringIsPalindrome(string); // saving returned value of stringIsPalindrome function in answer
    printf("%s is %s",string,(answer==true)?"Palindrome":"not Palindrome"); // displaying result
}

// Function Definitions
bool stringIsPalindrome(char str[])
{
    char flipped[strlen(str)]; // declaring flipped string with same size as passed string
    strcpy(flipped,str); // copying original string in flipped string
    int i=0; // initialising i with first index of flipped array
    int j=strlen(flipped)-1; // initialising j with last index of flipped array
    for(;i<j;i++,j--)
    {
        // swapping algorithm using indexing
        flipped[i] = flipped[i] + flipped[j]; // a = a + b;
        flipped[j] = flipped[i] - flipped[j]; // b = a - b;
        flipped[i] = flipped[i] - flipped[j]; // a = a - b;
    }
    if(strcmp(flipped,str)==0) // if reversed string is same as original string
        return true; // string is palindrome
    else // if reversed string is different from original string
        return false; // string is not palindrome
}