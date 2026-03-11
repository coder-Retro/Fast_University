#include<stdio.h>

// Function Declarations
float celsiusToFahrenheit(float a); // Parameters : (1 float) & Returns : (1 float)

// Main Function
void main()
{
    float celsius; // declaring celsius variable
    printf("Enter temperature in Celsius : ");
    scanf("%f",&celsius); // reading celsius
    float answer=celsiusToFahrenheit(celsius); // saving returned value of CtoF function in answer
    printf("Temperature in Fahrenheit is %.1f",answer); // displaying answer
}

// Function Definitions
float celsiusToFahrenheit(float a)
{
    float fahrenheit; // declaring fahrenheit variable
    fahrenheit=(a*9/5)+32; // formula for converting celsius to fahrenheit
    return fahrenheit; // returning fahrenheit
}