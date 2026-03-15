#include<stdio.h>
void main()
{
    // Declaring Grade Variable
    char grade;
    // Reading Input for Grade
    printf("Enter the grade : ");
    scanf(" %c",&grade);
    // If Grade is between A and F and Grade is not E
    if(grade>='A'&&grade<='F'&&grade!='E')
        printf("Grade is %c",grade);
    // If Grade is not between A and F or Grade is E
    else
        printf("Invalid Grade !");
}