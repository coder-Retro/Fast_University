#include<stdio.h>

// Function Declarations
int numberOfVowels(char str[]); // Parameters : (1 char array ) & Returns : (1 integer)

// Main Function
void main()
{
    char string[100]; // declaring string
    printf("Enter a string : ");
    scanf("%s",string); // reading string
    int answer=numberOfVowels(string); // saving returned value of numberOfVowels function in answer
    printf("Number of vowels in %s is %d",string,answer); // displaying answer
}

// Function Definitions
int numberOfVowels(char str[])
{
    int vowels=0; // declaring vowel counter variable
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            vowels++; // counting vowels in string
        }
    }
    return vowels; // returning number of vowels
}