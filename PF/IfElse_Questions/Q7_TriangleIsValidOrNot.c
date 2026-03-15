#include<stdio.h>
#include<math.h>
void main()
{
    // Declaring Variable for side lengths
    int a,b,c;
    // Reading lengths of sides
    printf("Enter length of side a : ");
    scanf("%d",&a);
    printf("Enter length of side b : ");
    scanf("%d",&b);
    printf("Enter length of side c : ");
    scanf("%d",&c);
    // If sides are positive, triangle can be valid
    if(a>0&&b>0&&c>0)
    {
        // If sum of any two sides is greater than 3rd, triangle is valid
        if(a+b>c||a+c>b||b+c>a)
            printf("Triangle is valid");
        // If sum of no two sides is greater than 3rd, triangle is invalid
        else
            printf("Triangle is invalid");
    }
    // If any side is negative or 0, triangle is invalid
    else
        printf("Triangle is not valid");
}