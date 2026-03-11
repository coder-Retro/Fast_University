#include<stdio.h>
void main()
{
    // Declaring Letter Variable
    char a;
    // Reading Input for Letter
    printf("Enter a character : ");
    scanf(" %c",&a);
    // If ascii of a belongs to (47-58)U(65-90)U(97-122), a is not a special character
    if((a>=47&&a<=58)||(a>=65&&a<=90)||(a>=97&&a<=122))
        printf("%c is not a special character",a);
    // a is a special character
    else
        printf("%c is a special character",a);
}