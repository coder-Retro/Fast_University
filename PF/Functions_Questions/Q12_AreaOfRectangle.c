#include<stdio.h>

// Function Declarations
float areaOfRect(float a,float b); // Parameters : (2 floats) & Returns : (1 float)

// Main Function
void main()
{
    float length,width; // declaring dimension variables
    printf("Enter length of Rectangle : ");
    scanf("%f",&length); // reading length
    printf("Enter width of Rectangle : ");
    scanf("%f",&width); // reading width
    float answer=areaOfRect(length,width); // saving returned value of areaOfRect function in answer
    printf("Area of Rectangle : %.2f",answer); // displaying answer
}

// Function Definitions
float areaOfRect(float a,float b)
{
    float area; // declaring area variable
    area=a*b; // formula for area of rectangle
    return area; // returning area
}