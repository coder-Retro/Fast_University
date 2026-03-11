#include<stdio.h>
void main()
{
    // Declaring String
    char str[100];
    printf("Enter string : ");
    // Reading String
    fgets(str,sizeof(str),stdin); 
    // Initializing Length
    int length=0;
    // Following loop Runs if *p != '\n' and Updates length
    for(char *p=str;*p!='\n';*p++) 
    {
        // Updating length
        length++; 
    }
    // Displaying length
    printf("length is : %d",length); 
}