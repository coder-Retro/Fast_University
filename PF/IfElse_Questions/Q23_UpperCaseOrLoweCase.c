#include<stdio.h>
void main()
{
    // Declaring Letter Variable
    char a;
    // Reading Input for Letter
    printf("Enter a letter : ");
    scanf(" %c",&a);
    // If (65 >= ascii of a <= 90), a is Upper Case
    if(a>=65&&a<=90)
        printf("%c is uppercase",a);
    // If (97 >= ascii of a <= 122), a is Lower Case
    else if(a>=97&&a<=122)
        printf("%c is lowercase",a);
    // c is another character
    else
        printf("%c does not belong to English Alphabet",a);
}