#include<stdio.h>
#include<string.h> // strlen();
void main()
{
    char str[100]; // declaring string
    printf("Enter a string : ");
    scanf("%s",str); // reading str
    char *a,*b; // declaring pointer for string reversal
    a=&str[0]; // assigning base address of str to a
    b=&str[strlen(str)-1]; // assigning last address of str to b
    for(;a<b;a++,b--)
    {
        //swapping alogrithm using pointers
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        /*
        same can be achieved by following method is third variable is allowed :
        char temp;
        temp = *a;
        *a = *b;
        *b = temp;
        */
    }
    printf("Reversed String is : %s",str); // writing reversed string
}