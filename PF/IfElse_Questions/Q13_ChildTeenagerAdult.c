#include<stdio.h>
void main()
{
    // Declaring Age Variable
    int age;
    // Reading Input for Age
    printf("Enter age : ");
    scanf("%d",&age);
    // If age between 1 and 12, category is child
    if(age>=1&&age<=12)
        printf("Child");
    // If age between 13 and 19, category is teenager
    else if(age>=13&&age<=19)
        printf("Teenager");
    // If age above 19, category is adult
    else if(age>=20)
        printf("Adult");
    // If age is negative or 0, input is invalid
    else
        printf("Invalid Age !");
}