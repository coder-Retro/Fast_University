#include<stdio.h>
void main()
{
    // Declaring Variable for Character
    char a;
    // Reading Input for Character
    printf("Enter a letter : ");
    scanf(" %c",&a);
    // If a belongs to {a,A,e,E,i,I,o,O,u,U} then a is vowel
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
        printf("%c is vowel .",a);
    // If a does not belong to {a,A,e,E,i,I,o,O,u,U} then a is consonant
    else
        printf("%c is consonant .",a);
}